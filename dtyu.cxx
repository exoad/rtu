#pragma once

#include "xt"
#include "xtu"
#include "xtu/stringify"
#include "stringview"
#include<vector>
#include<iostream>

using namespace std;
using namespace str;
using llp = XTU::LONGLONG_PRT;

signed main(void) {
  xt::port::ent(1039);
  func_sync_with_gen(NULL);
  
  vector<llp> llpxtu;
  XTU::DEF >>= llpxtu;
  for(auto& a: llpxtu) {
     cout << stringify(llpxtu) << endl;
  }
}
