  TMarker* mk[64];
  TF1 *fln, *fne;

 void dln(void)
 {
  double dx = 1e-6;
  fln = new TF1("fln", "log(x)", dx, 5);
  fln->SetLineColor(kBlue);
  fln->Draw();
  int j = 0;
  for (double x=0.1; x<5; x += 0.1) {
    double y2=fln->Eval(x+dx);
    double y1=fln->Eval(x-dx);
    double y = (y2-y1)/(2*dx);
    mk[j] = new TMarker(x,y,21);
    j++;
   }
  for (int i=0; i<50; i++) {mk[i]->Draw("same");}
  fne = new TF1("fne", "1.0/x", dx, 5);
  fne->Draw("same");
}
