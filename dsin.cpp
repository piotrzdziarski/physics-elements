TMarker* mk[64];
TF1 *fs, *fc;

void dsin(void)
{
  fs = new TF1("fs", "sin(x)", 0.0, 2.0 * M_PI);
  fs->SetLineColor(kBlue);
  fs->Draw();
  int j = 0;
  double dx = 1e-13;
  for (double x=0.0; x<2*M_PI; x += 0.1) {
    double y2=fs->Eval(x+dx);
    double y1=fs->Eval(x-dx);
    double y = (y2-y1)/(2*dx);
    mk[j] = new TMarker(x,y,20);
    j++;
   }
  for (int i=0; i<60; i++) {mk[i]->Draw("same");}
  fc = new TF1("fc", "cos(x)", 0.0, 2.0* M_PI);
  fc->Draw("same");
}
