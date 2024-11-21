  TMarker* mk[64];
  TF1 *fe, *fne;

 void Pochodna_Exp(void)
 {
  fe = new TF1("fe", "exp(-x)", 0.0, 5);
  fe->Draw();
  fe->SetLineColor(kBlue);
  int j = 0;
  double dx = 1e-6;
  for (double x=0.0; x<5; x += 0.1) {
    double y2=fe->Eval(x+dx);
    double y1=fe->Eval(x-dx);
    double y = (y2-y1)/(2*dx);
    mk[j] = new TMarker(x,y,20);
    j++;
   }
  for (int i=0; i<50; i++) {mk[i]->Draw("same");}
  fne = new TF1("fne", "-exp(-x)", 0.0, 5);
  fne->SetLineColor(kGreen);
  fne->Draw("same");
  }
