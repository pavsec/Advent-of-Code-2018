/* slozenost: O(n * m)
   n - broj sekundi potreban da se zvijezde posloze u slova
   m - velcina unosa
*/


#include <bits/stdc++.h>

using namespace std;


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  pair< pair<int, int>, pair<int, int> > star[320];
  int max_h = 0, min_h = 0, max_w = 0, min_w = 0;
  char sky[1000][1000];

  for (int i = 0; i < 1000; ++i)
  {
  	for (int j = 0; j < 1000; ++j)
  	{
  		sky[i][j] = '.';
  	}
  }
  
  for (int x = 0; x < 318; ++x)
  {
  	scanf("position=< %d, %d> velocity=<%d,  %d>\n", &star[x].first.first, &star[x].first.second, &star[x].second.first, &star[x].second.second);
  }
  int size_w = min_w * -1 + max_w, size_h = min_h * -1 + max_h;
  
  for (int i = 0; i < 10345; ++i)
  {
  	for (int j = 0; j < 318; ++j)
  	{
  		if (star[j].first.first > 0 && star[j].first.first < 300 && star[j].first.second > 0 && star[j].first.second < 200) {
  			sky[star[j].first.first][star[j].first.second] = '.';
  		}
   		star[j].first.first += star[j].second.first;
  		star[j].first.second += star[j].second.second;
  		if (star[j].first.first > 0 && star[j].first.first < 300 && star[j].first.second > 0 && star[j].first.second < 200) {
  			sky[star[j].first.first][star[j].first.second] = '#';
  		}
  	}
  }

  for (int k = 170; k < 240; ++k)
    {
  	  for (int l = 120; l < 140; ++l)
  	  {
 		printf("%c", sky[k][l]);
  	  }
  	printf("\n");
  }

  return 0;
}

/*  kod je tocan samo za "moj" unos, stane tocno u sekundi kad je vidljivo rjesenje:
position=<-41150,  41504> velocity=< 4, -4>
position=< 31211, -10213> velocity=<-3,  1>
position=<-51522, -41248> velocity=< 5,  4>
position=< 31227, -51593> velocity=<-3,  5>
position=< 31257, -20560> velocity=<-3,  2>
position=< 41558,  10468> velocity=<-4, -1>
position=< 10539, -30904> velocity=<-1,  3>
position=< 51919, -41253> velocity=<-5,  4>
position=< 31246,  10473> velocity=<-3, -1>
position=<-20471,  20813> velocity=< 2, -2>
position=< 51910, -10222> velocity=<-5,  1>
position=<-20503,  20816> velocity=< 2, -2>
position=< 20901, -41255> velocity=<-2,  4>
position=< 31249, -41249> velocity=<-3,  4>
position=<-10139,  10477> velocity=< 1, -1>
position=< 20888, -30903> velocity=<-2,  3>
position=< 31218,  31158> velocity=<-3, -3>
position=<-30802,  51848> velocity=< 3, -5>
position=< 51923,  51854> velocity=<-5, -5>
position=<-51503,  41504> velocity=< 5, -4>
position=<-10131,  31165> velocity=< 1, -3>
position=<-30809, -10222> velocity=< 3,  1>
position=< 10551,  20818> velocity=<-1, -2>
position=< 31236,  31158> velocity=<-3, -3>
position=<-51534,  20822> velocity=< 5, -2>
position=< 20920, -41250> velocity=<-2,  4>
position=<-30841,  41504> velocity=< 3, -4>
position=< 51932, -41256> velocity=<-5,  4>
position=< 31249,  10469> velocity=<-3, -1>
position=<-41198,  41505> velocity=< 4, -4>
position=<-30833,  41510> velocity=< 3, -4>
position=<-51494,  41507> velocity=< 5, -4>
position=< 10553,  10472> velocity=<-1, -1>
position=<-41174, -20564> velocity=< 4,  2>
position=< 41578,  20816> velocity=<-4, -2>
position=<-51503, -10214> velocity=< 5,  1>
position=<-30824, -30906> velocity=< 3,  3>
position=<-41172,  20816> velocity=< 4, -2>
position=<-41198,  41507> velocity=< 4, -4>
position=< 41578, -30911> velocity=<-4,  3>
position=< 20904,  20817> velocity=<-2, -2>
position=< 51901,  41503> velocity=<-5, -4>
position=< 20872, -30906> velocity=<-2,  3>
position=< 31265, -20560> velocity=<-3,  2>
position=<-10136, -10217> velocity=< 1,  1>
position=< 31246,  20817> velocity=<-3, -2>
position=< 51927,  20820> velocity=<-5, -2>
position=<-30821, -10222> velocity=< 3,  1>
position=<-20492, -10221> velocity=< 2,  1>
position=<-20488, -51596> velocity=< 2,  5>
position=< 41610, -41249> velocity=<-4,  4>
position=< 31257, -30908> velocity=<-3,  3>
position=< 41610,  31160> velocity=<-4, -3>
position=<-10151,  41503> velocity=< 1, -4>
position=<-51527, -10216> velocity=< 5,  1>
position=< 20867, -30903> velocity=<-2,  3>
position=< 31228,  41503> velocity=<-3, -4>
position=<-10160, -41253> velocity=< 1,  4>
position=< 41595, -30907> velocity=<-4,  3>
position=<-51506,  31158> velocity=< 5, -3>
position=<-10142, -10219> velocity=< 1,  1>
position=<-10115, -10222> velocity=< 1,  1>
position=< 10572, -51601> velocity=<-1,  5>
position=< 51899,  20818> velocity=<-5, -2>
position=<-20476, -30910> velocity=< 2,  3>
position=<-41174,  31162> velocity=< 4, -3>
position=< 31246,  41509> velocity=<-3, -4>
position=<-30801, -41253> velocity=< 3,  4>
position=<-10130,  41508> velocity=< 1, -4>
position=<-20473,  10470> velocity=< 2, -1>
position=<-41150, -20565> velocity=< 4,  2>
position=< 31246,  31165> velocity=<-3, -3>
position=< 41610, -41256> velocity=<-4,  4>
position=< 41574,  31164> velocity=<-4, -3>
position=<-41157, -30903> velocity=< 4,  3>
position=< 31241,  10469> velocity=<-3, -1>
position=< 31217, -30912> velocity=<-3,  3>
position=< 10529,  41503> velocity=<-1, -4>
position=< 20901,  51853> velocity=<-2, -5>
position=<-51551,  10472> velocity=< 5, -1>
position=< 41613,  41503> velocity=<-4, -4>
position=<-10134, -41251> velocity=< 1,  4>
position=< 41595, -41253> velocity=<-4,  4>
position=<-51511,  10477> velocity=< 5, -1>
position=<-30837, -10217> velocity=< 3,  1>
position=< 51950, -51602> velocity=<-5,  5>
position=<-51541,  41503> velocity=< 5, -4>
position=< 51907,  51857> velocity=<-5, -5>
position=<-41198,  10469> velocity=< 4, -1>
position=<-30834,  20817> velocity=< 3, -2>
position=< 51947,  31163> velocity=<-5, -3>
position=<-30804, -30912> velocity=< 3,  3>
position=<-30829, -20560> velocity=< 3,  2>
position=< 10547, -30908> velocity=<-1,  3>
position=<-51531,  31166> velocity=< 5, -3>
position=< 51955,  41510> velocity=<-5, -4>
position=<-30861, -30911> velocity=< 3,  3>
position=< 20872, -51596> velocity=<-2,  5>
position=<-30829,  51854> velocity=< 3, -5>
position=<-41150, -10218> velocity=< 4,  1>
position=< 31257, -20560> velocity=<-3,  2>
position=<-20476,  20816> velocity=< 2, -2>
position=<-20468,  10470> velocity=< 2, -1>
position=<-51519, -30911> velocity=< 5,  3>
position=< 51959,  10468> velocity=<-5, -1>
position=< 20888, -51593> velocity=<-2,  5>
position=< 51947,  10475> velocity=<-5, -1>
position=< 31246,  10468> velocity=<-3, -1>
position=<-20516, -41249> velocity=< 2,  4>
position=<-51511, -41248> velocity=< 5,  4>
position=<-41147,  20817> velocity=< 4, -2>
position=<-41150, -51594> velocity=< 4,  5>
position=<-10163, -30908> velocity=< 1,  3>
position=<-10152, -10213> velocity=< 1,  1>
position=<-20460, -30903> velocity=< 2,  3>
position=<-41169, -10219> velocity=< 4,  1>
position=<-51531, -30907> velocity=< 5,  3>
position=<-30812,  41503> velocity=< 3, -4>
position=<-41169,  10477> velocity=< 4, -1>
position=< 10546,  51848> velocity=<-1, -5>
position=<-10139,  20813> velocity=< 1, -2>
position=<-30861,  51851> velocity=< 3, -5>
position=<-20497, -51593> velocity=< 2,  5>
position=< 51949, -20558> velocity=<-5,  2>
position=< 41597, -51595> velocity=<-4,  5>
position=< 51940,  31163> velocity=<-5, -3>
position=< 41589,  10473> velocity=<-4, -1>
position=<-51495, -41257> velocity=< 5,  4>
position=< 31265, -41254> velocity=<-3,  4>
position=< 10527,  10473> velocity=<-1, -1>
position=< 51927,  41509> velocity=<-5, -4>
position=< 20884,  10471> velocity=<-2, -1>
position=<-51493,  41507> velocity=< 5, -4>
position=<-41182, -30912> velocity=< 4,  3>
position=< 10575,  41509> velocity=<-1, -4>
position=< 20884, -20567> velocity=<-2,  2>
position=< 10535, -20560> velocity=<-1,  2>
position=<-51543,  41512> velocity=< 5, -4>
position=<-30825, -10214> velocity=< 3,  1>
position=<-51535, -20559> velocity=< 5,  2>
position=< 10528, -10218> velocity=<-1,  1>
position=<-51538,  41506> velocity=< 5, -4>
position=< 20892, -30905> velocity=<-2,  3>
position=< 31249, -51596> velocity=<-3,  5>
position=< 10539,  20815> velocity=<-1, -2>
position=<-20464, -41248> velocity=< 2,  4>
position=<-41186, -20567> velocity=< 4,  2>
position=<-20492,  20820> velocity=< 2, -2>
position=<-30818,  31165> velocity=< 3, -3>
position=<-10131, -51596> velocity=< 1,  5>
position=< 51919,  20814> velocity=<-5, -2>
position=<-41166, -30905> velocity=< 4,  3>
position=<-10151,  31163> velocity=< 1, -3>
position=< 10522,  10468> velocity=<-1, -1>
position=< 51911, -30912> velocity=<-5,  3>
position=<-41173,  31160> velocity=< 4, -3>
position=< 31260, -41248> velocity=<-3,  4>
position=<-10139, -10220> velocity=< 1,  1>
position=<-30857, -20558> velocity=< 3,  2>
position=< 10531, -10222> velocity=<-1,  1>
position=<-30813, -20566> velocity=< 3,  2>
position=< 51944, -30903> velocity=<-5,  3>
position=<-41198,  20820> velocity=< 4, -2>
position=<-41150, -41252> velocity=< 4,  4>
position=<-20508,  20814> velocity=< 2, -2>
position=< 41554, -41256> velocity=<-4,  4>
position=< 31238, -41248> velocity=<-3,  4>
position=< 20906, -10219> velocity=<-2,  1>
position=< 51912,  41505> velocity=<-5, -4>
position=< 20866, -51602> velocity=<-2,  5>
position=< 10519,  31164> velocity=<-1, -3>
position=<-20479,  51856> velocity=< 2, -5>
position=<-30829, -51596> velocity=< 3,  5>
position=< 51943, -10221> velocity=<-5,  1>
position=< 20917, -41249> velocity=<-2,  4>
position=< 20888,  41507> velocity=<-2, -4>
position=< 51957,  41507> velocity=<-5, -4>
position=<-20499, -10213> velocity=< 2,  1>
position=< 51911,  41503> velocity=<-5, -4>
position=<-51551, -51595> velocity=< 5,  5>
position=<-10139,  51849> velocity=< 1, -5>
position=< 41582, -10222> velocity=<-4,  1>
position=<-41150,  31159> velocity=< 4, -3>
position=< 20888,  41504> velocity=<-2, -4>
position=< 10567,  20821> velocity=<-1, -2>
position=< 51900, -10222> velocity=<-5,  1>
position=<-51503,  20815> velocity=< 5, -2>
position=<-20488, -51596> velocity=< 2,  5>
position=< 51939, -10221> velocity=<-5,  1>
position=< 31270,  10468> velocity=<-3, -1>
position=<-51527,  20816> velocity=< 5, -2>
position=< 51926,  51853> velocity=<-5, -5>
position=<-51543, -20564> velocity=< 5,  2>
position=< 20883, -20558> velocity=<-2,  2>
position=<-41166,  20816> velocity=< 4, -2>
position=< 51936,  41511> velocity=<-5, -4>
position=<-10115, -10220> velocity=< 1,  1>
position=< 31210, -51593> velocity=<-3,  5>
position=<-10115, -41248> velocity=< 1,  4>
position=< 31233, -20559> velocity=<-3,  2>
position=< 20921, -51598> velocity=<-2,  5>
position=<-41185, -30912> velocity=< 4,  3>
position=<-51531, -51600> velocity=< 5,  5>
position=< 10543, -10220> velocity=<-1,  1>
position=< 51924, -30912> velocity=<-5,  3>
position=<-30821,  20813> velocity=< 3, -2>
position=< 10545, -51602> velocity=<-1,  5>
position=<-10126, -41248> velocity=< 1,  4>
position=<-30829, -30907> velocity=< 3,  3>
position=<-51495,  20817> velocity=< 5, -2>
position=< 10548, -41256> velocity=<-1,  4>
position=< 41578, -51599> velocity=<-4,  5>
position=<-41203, -51602> velocity=< 4,  5>
position=< 31253, -10214> velocity=<-3,  1>
position=<-20457, -30908> velocity=< 2,  3>
position=<-10147,  51848> velocity=< 1, -5>
position=<-51502, -20558> velocity=< 5,  2>
position=< 41615, -10222> velocity=<-4,  1>
position=<-41182, -30906> velocity=< 4,  3>
position=< 20912, -10216> velocity=<-2,  1>
position=< 20869, -20566> velocity=<-2,  2>
position=< 10555,  41510> velocity=<-1, -4>
position=<-30835,  10472> velocity=< 3, -1>
position=<-20487,  41505> velocity=< 2, -4>
position=<-20511, -41249> velocity=< 2,  4>
position=< 20913,  20822> velocity=<-2, -2>
position=<-30824,  10469> velocity=< 3, -1>
position=< 10567,  10472> velocity=<-1, -1>
position=< 31238,  31166> velocity=<-3, -3>
position=<-41186, -10219> velocity=< 4,  1>
position=<-41169, -51602> velocity=< 4,  5>
position=< 51947, -20564> velocity=<-5,  2>
position=< 41562, -10219> velocity=<-4,  1>
position=<-10155,  20821> velocity=< 1, -2>
position=< 20884, -51598> velocity=<-2,  5>
position=< 20907,  41505> velocity=<-2, -4>
position=< 10579,  51848> velocity=<-1, -5>
position=< 41586, -30905> velocity=<-4,  3>
position=<-30859, -41248> velocity=< 3,  4>
position=< 20864,  10475> velocity=<-2, -1>
position=< 20876, -30908> velocity=<-2,  3>
position=< 10543, -41248> velocity=<-1,  4>
position=< 31246, -51598> velocity=<-3,  5>
position=<-30833,  41503> velocity=< 3, -4>
position=<-20473, -51595> velocity=< 2,  5>
position=< 31265, -30904> velocity=<-3,  3>
position=<-51493,  31158> velocity=< 5, -3>
position=< 51947,  20821> velocity=<-5, -2>
position=<-41166, -30912> velocity=< 4,  3>
position=<-30813,  41508> velocity=< 3, -4>
position=<-41198, -51601> velocity=< 4,  5>
position=<-10151,  20819> velocity=< 1, -2>
position=< 51907,  51854> velocity=<-5, -5>
position=<-10158, -41254> velocity=< 1,  4>
position=<-41170, -41249> velocity=< 4,  4>
position=< 51907,  51856> velocity=<-5, -5>
position=< 41586, -10216> velocity=<-4,  1>
position=< 31246, -20560> velocity=<-3,  2>
position=<-30826, -10217> velocity=< 3,  1>
position=< 10569,  51848> velocity=<-1, -5>
position=<-20484, -30912> velocity=< 2,  3>
position=< 10559,  41510> velocity=<-1, -4>
position=< 41555,  31167> velocity=<-4, -3>
position=< 20877, -30911> velocity=<-2,  3>
position=<-51549,  20822> velocity=< 5, -2>
position=<-51551,  51856> velocity=< 5, -5>
position=<-10163,  10476> velocity=< 1, -1>
position=<-51530, -10222> velocity=< 5,  1>
position=< 31241,  20817> velocity=<-3, -2>
position=<-51514,  20822> velocity=< 5, -2>
position=<-41155,  31158> velocity=< 4, -3>
position=< 41565,  10468> velocity=<-4, -1>
position=< 51949,  41503> velocity=<-5, -4>
position=< 20874,  10468> velocity=<-2, -1>
position=< 41611, -41253> velocity=<-4,  4>
position=<-30813, -30906> velocity=< 3,  3>
position=< 41574,  41511> velocity=<-4, -4>
position=< 51931,  51856> velocity=<-5, -5>
position=<-20508, -10220> velocity=< 2,  1>
position=< 20891, -41253> velocity=<-2,  4>
position=< 31249,  31159> velocity=<-3, -3>
position=< 41579,  31162> velocity=<-4, -3>
position=<-51527,  51853> velocity=< 5, -5>
position=<-30826,  20819> velocity=< 3, -2>
position=<-20508,  10471> velocity=< 2, -1>
position=<-20472,  10476> velocity=< 2, -1>
position=< 51924,  41507> velocity=<-5, -4>
position=<-30837, -51600> velocity=< 3,  5>
position=<-20487,  41512> velocity=< 2, -4>
position=<-51499,  41512> velocity=< 5, -4>
position=<-51508, -30910> velocity=< 5,  3>
position=<-20483, -20566> velocity=< 2,  2>
position=<-20516, -51596> velocity=< 2,  5>
position=< 20924, -30908> velocity=<-2,  3>
position=<-10144, -41257> velocity=< 1,  4>
position=<-41154, -41257> velocity=< 4,  4>
position=< 51902, -20558> velocity=<-5,  2>
position=< 41610, -10216> velocity=<-4,  1>
position=< 51917, -41248> velocity=<-5,  4>
position=<-20459,  31158> velocity=< 2, -3>
position=< 20884,  31162> velocity=<-2, -3>
position=<-20506, -30908> velocity=< 2,  3>
position=<-51533, -30903> velocity=< 5,  3>
position=<-10168, -30912> velocity=< 1,  3>
position=< 20904,  41506> velocity=<-2, -4>
position=<-51551,  31163> velocity=< 5, -3>
position=<-20500, -51595> velocity=< 2,  5>
position=< 31251, -20561> velocity=<-3,  2>
position=<-41186, -51595> velocity=< 4,  5>
position=<-20496,  31163> velocity=< 2, -3>
position=<-20458, -41257> velocity=< 2,  4>
position=< 41554, -41255> velocity=<-4,  4>
position=<-51511,  31163> velocity=< 5, -3>
position=<-51535,  20821> velocity=< 5, -2>
position=<-30853, -41249> velocity=< 3,  4>
position=< 20912, -51597> velocity=<-2,  5>
position=< 10527, -30903> velocity=<-1,  3>
position=< 41587,  41505> velocity=<-4, -4>

*/
