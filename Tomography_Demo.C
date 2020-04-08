#include math.h
#include ROOT::Math
TLorentzVector p_1(0.,0.,3499.9998743079977,3500); // projectile
TLorentzVector p_2(0.,0., -3499.9998743079977,3500); // target

//Info for matrices:
//https://root.cern.ch/doc/master/MatVecFunctions.html

void zee(TLorentzVector p_1, TLorentzVector p_2)
{
   TLorentzVector pa(1, 0, 0, 1);
   TLorentzVector pb(1, 0, 0, -1);
   TLorentzVector q = p_1 + p_2
   Float_t zeddy[4][4] = pa * q . gee. pb - pb* q .gee.pa;
   zeddy = zeddy/math::sqrt(-zeddy.gee.zeddy);
}

void exx(TLorentzVector p_1, TLorentzVector p_2)
{
   TLorentzVector pa(1, 0, 0, 1);
   TLorentzVector pb(1, 0, 0, -1);
   Float_t exxie[4][4] = q - pa *(q . gee . q/ (2* q . gee . pa))- pb * (q.gee.q/ (2*q . gee . pb));
   exxie = exxie/math::sqrt(-exxie.gee.exxie);
}

void yyy(TLorentzVector p_1, TLorentzVector p_2)
{
   Float_t preyyy[4][4] = Table[ Sum[ LeviCivitaTensor[4][[p,i,j,k]]*q[[p]]*pa[[i]]*pb[[j]],{p,4},{i,4},{j,4},{k,4}];
   preyyy = preyyy/math::sqrt(-preyyy.gee.preyyy);
}

RooDataSet* qandell = RooDataSet::read("diMuV1.txt",RooArgList(px1,py1,pz1,px2,py2,pz2));
RooDataSet* smally = RooDataSet ("smally", "smally", RooDataSet &qandell, &RooArgList(px1,py1,pz1,px2,py2,pz2),RooFormulaVar &(0 < rapid < 0.5), const char *wgtVarName=0)
sorty = Sort[smally, dot[#1[[1]], #1[[1]]] < dot[#2[[1]], #2[[1]]] &];
datplus = Table[sorty[[j, 2]], {j, Length[sorty]}];
datminus = Table[sorty[[j, 3]], {j, Length[sorty]}];
datminus[[1]]