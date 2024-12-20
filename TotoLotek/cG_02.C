#ifdef __CLING__
#pragma cling optimize(0)
#endif
void cG_02()
{
//=========Macro generated from canvas: cG_02/ Gaus
//=========  (Fri Dec 13 10:34:16 2024) by ROOT version 6.30/04
   TCanvas *cG_02 = new TCanvas("cG_02", " Gaus",630,72,600,600);
   cG_02->Range(50.16241,-1.457767,150.0232,12.97973);
   cG_02->SetFillColor(0);
   cG_02->SetBorderMode(0);
   cG_02->SetBorderSize(2);
   cG_02->SetFrameBorderMode(0);
   cG_02->SetFrameBorderMode(0);
   
   TH1F *hG_02__1 = new TH1F("hG_02__1","hist z hisogramu",40,60,140);
   hG_02__1->SetBinContent(0,1);
   hG_02__1->SetBinContent(7,1);
   hG_02__1->SetBinContent(9,1);
   hG_02__1->SetBinContent(10,1);
   hG_02__1->SetBinContent(11,1);
   hG_02__1->SetBinContent(12,2);
   hG_02__1->SetBinContent(14,4);
   hG_02__1->SetBinContent(15,7);
   hG_02__1->SetBinContent(16,4);
   hG_02__1->SetBinContent(17,2);
   hG_02__1->SetBinContent(18,7);
   hG_02__1->SetBinContent(19,7);
   hG_02__1->SetBinContent(20,5);
   hG_02__1->SetBinContent(21,9);
   hG_02__1->SetBinContent(22,8);
   hG_02__1->SetBinContent(23,11);
   hG_02__1->SetBinContent(24,7);
   hG_02__1->SetBinContent(25,9);
   hG_02__1->SetBinContent(26,4);
   hG_02__1->SetBinContent(27,3);
   hG_02__1->SetBinContent(28,3);
   hG_02__1->SetBinContent(30,1);
   hG_02__1->SetBinContent(32,1);
   hG_02__1->SetBinContent(33,1);
   hG_02__1->SetEntries(100);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("hG_02");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 100    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  99.95");
   ptstats_LaTex = ptstats->AddText("Std Dev   =   9.74");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   hG_02__1->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hG_02__1);
   
   TF1 *PrevFitTMP2 = new TF1("PrevFitTMP","gaus",60,140, TF1::EAddToList::kNo);
   PrevFitTMP2->SetFillColor(19);
   PrevFitTMP2->SetFillStyle(0);
   PrevFitTMP2->SetLineColor(2);
   PrevFitTMP2->SetLineWidth(2);
   PrevFitTMP2->SetChisquare(13.93005);
   PrevFitTMP2->SetNDF(20);
   PrevFitTMP2->GetXaxis()->SetLabelFont(42);
   PrevFitTMP2->GetXaxis()->SetTitleOffset(1);
   PrevFitTMP2->GetXaxis()->SetTitleFont(42);
   PrevFitTMP2->GetYaxis()->SetLabelFont(42);
   PrevFitTMP2->GetYaxis()->SetTitleFont(42);
   PrevFitTMP2->SetParameter(0,6.883208);
   PrevFitTMP2->SetParError(0,1.031113);
   PrevFitTMP2->SetParLimits(0,0,0);
   PrevFitTMP2->SetParameter(1,101.5102);
   PrevFitTMP2->SetParError(1,1.369478);
   PrevFitTMP2->SetParLimits(1,0,0);
   PrevFitTMP2->SetParameter(2,10.7281);
   PrevFitTMP2->SetParError(2,1.397679);
   PrevFitTMP2->SetParLimits(2,0,97.49772);
   PrevFitTMP2->SetParent(hG_02__1);
   hG_02__1->GetListOfFunctions()->Add(PrevFitTMP2);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hG_02__1->SetLineColor(ci);
   hG_02__1->GetXaxis()->SetTitle("trafienia hist");
   hG_02__1->GetXaxis()->SetLabelFont(42);
   hG_02__1->GetXaxis()->SetTitleOffset(1);
   hG_02__1->GetXaxis()->SetTitleFont(42);
   hG_02__1->GetYaxis()->SetTitle("n");
   hG_02__1->GetYaxis()->SetLabelFont(42);
   hG_02__1->GetYaxis()->SetTitleFont(42);
   hG_02__1->GetZaxis()->SetLabelFont(42);
   hG_02__1->GetZaxis()->SetTitleOffset(1);
   hG_02__1->GetZaxis()->SetTitleFont(42);
   hG_02__1->Draw("");
   
   TPaveText *pt = new TPaveText(0.2994796,0.9367476,0.7005204,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("hist z hisogramu");
   pt->Draw();
   
   TF1 *PrevFitTMP3 = new TF1("PrevFitTMP","gaus",60,140, TF1::EAddToList::kDefault);
   PrevFitTMP3->SetFillColor(19);
   PrevFitTMP3->SetFillStyle(0);
   PrevFitTMP3->SetLineColor(2);
   PrevFitTMP3->SetLineWidth(2);
   PrevFitTMP3->SetChisquare(13.93005);
   PrevFitTMP3->SetNDF(20);
   PrevFitTMP3->GetXaxis()->SetLabelFont(42);
   PrevFitTMP3->GetXaxis()->SetTitleOffset(1);
   PrevFitTMP3->GetXaxis()->SetTitleFont(42);
   PrevFitTMP3->GetYaxis()->SetLabelFont(42);
   PrevFitTMP3->GetYaxis()->SetTitleFont(42);
   PrevFitTMP3->SetParameter(0,6.883208);
   PrevFitTMP3->SetParError(0,1.031113);
   PrevFitTMP3->SetParLimits(0,0,0);
   PrevFitTMP3->SetParameter(1,101.5102);
   PrevFitTMP3->SetParError(1,1.369478);
   PrevFitTMP3->SetParLimits(1,0,0);
   PrevFitTMP3->SetParameter(2,10.7281);
   PrevFitTMP3->SetParError(2,1.397679);
   PrevFitTMP3->SetParLimits(2,0,97.49772);
   PrevFitTMP3->Draw("same");
   cG_02->Modified();
   cG_02->SetSelected(cG_02);
}
