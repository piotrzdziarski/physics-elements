  GNU nano 6.2                                                                                    Pochodna_Rozpad.C                                                                                              //  TMarker* mk[64];
TF1 *fe, *fex;

void Pochodna_Rozpad(void)
{
  double ul = 9.0;
  fe = new TF1("fe", "exp(-2.5*x)", 0.0, ul);
  fe->SetLineColor(kBlue);
  fe->SetNpx(1.e9);
  fe->Draw();
  double Iexp = fe->Integral(.0, ul);
  fex = new TF1("fex", "x*exp(-2.5*x)", 0.0, ul);
  fex->SetLineColor(kGreen);
  fex->SetNpx(1.e9);
  fex->Draw("same");
  double Ixexp = fex->Integral(.0, ul);
  cout << Iexp << endl << Ixexp << endl << Ixexp / Iexp;
}



