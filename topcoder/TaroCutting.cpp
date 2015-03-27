#include <iostream>
#include <sstream>
#include <algorithm>
#include <utility>
#include <vector>
#include <string>
#include <cstdio>

using namespace std;

// @begin_lib
// @end_lib

class TaroCutting {
public:
  int getNumber(vector <int> height, vector <int> add, vector <int> device, int time) {
    
  }
};

// @begin_tests
void _run_test(vector< int > height, vector< int > add, vector< int > device, int time, int res_expected, int test_no) {
int tc_res = (new TaroCutting)->getNumber(height, add, device, time);
if (tc_res == res_expected)
cout << "--- test " << test_no << ": ok ---" << endl;
else {
cout << "--- test " << test_no << ": failed ---" << endl;
cout << "expected: ";
cout << res_expected;
cout << endl << "got: ";
cout << tc_res;
cout << endl;
}
}
int main() {
vector< int > height;
vector< int > add;
vector< int > device;
int time;
int res_expected;
{int tmpa[] = {4, 7};
height.assign(tmpa, tmpa + 2);}
{int tmpa[] = {7, 1};
add.assign(tmpa, tmpa + 2);}
{int tmpa[] = {7};
device.assign(tmpa, tmpa + 1);}
time = 1;
res_expected = 15;
_run_test(height, add, device, time, res_expected, 0);
{int tmpa[] = {3, 1, 2};
height.assign(tmpa, tmpa + 3);}
{int tmpa[] = {1, 1, 1};
add.assign(tmpa, tmpa + 3);}
{int tmpa[] = {7, 7, 7};
device.assign(tmpa, tmpa + 3);}
time = 2;
res_expected = 12;
_run_test(height, add, device, time, res_expected, 1);
{int tmpa[] = {100, 50};
height.assign(tmpa, tmpa + 2);}
{int tmpa[] = {75, 30};
add.assign(tmpa, tmpa + 2);}
{int tmpa[] = {200, 100, 50};
device.assign(tmpa, tmpa + 3);}
time = 2;
res_expected = 130;
_run_test(height, add, device, time, res_expected, 2);
{int tmpa[] = {7, 10, 1, 7, 5, 4, 11, 5, 7, 9, 10, 8};
height.assign(tmpa, tmpa + 12);}
{int tmpa[] = {1, 3, 4, 10, 2, 1, 6, 4, 8, 7, 5, 10};
add.assign(tmpa, tmpa + 12);}
{int tmpa[] = {7, 1, 5, 10};
device.assign(tmpa, tmpa + 4);}
time = 3;
res_expected = 96;
_run_test(height, add, device, time, res_expected, 3);
{int tmpa[] = {35, 45, 32, 8};
height.assign(tmpa, tmpa + 4);}
{int tmpa[] = {2, 25, 31, 5};
add.assign(tmpa, tmpa + 4);}
{int tmpa[] = {29, 28, 3, 11, 28, 37};
device.assign(tmpa, tmpa + 6);}
time = 8;
res_expected = 29;
_run_test(height, add, device, time, res_expected, 4);
{int tmpa[] = {614, 649, 977, 808, 821, 356, 801, 493, 669, 650, 652, 627, 129, 261, 883, 513, 62, 698, 83, 772, 779, 719, 83, 105, 774, 867, 412, 892, 142, 851, 743, 66, 221, 494, 125, 905, 638, 342, 723, 680, 407, 197, 111, 368, 676, 694, 765, 482, 712, 188, 325, 535, 6, 49, 655, 595, 958, 805, 659, 893, 370, 904, 276, 156, 29, 458, 757, 632, 731, 289, 582, 207, 843, 365, 387, 521, 69, 269, 459, 428, 423, 885, 744, 199, 998, 968, 296, 473, 50, 752, 492, 919, 473, 981, 380, 896, 769, 991, 269, 93, 108, 184, 762, 312, 511, 256, 374, 600, 643, 445, 908, 250, 384, 518, 119, 464, 499, 124, 82, 999, 881, 767, 177, 796, 2, 620, 759, 380, 901, 221, 407, 622, 260, 622, 729, 264, 768, 79, 236, 524, 437, 215, 108, 518, 820, 725, 490, 796, 986, 318};
height.assign(tmpa, tmpa + 150);}
{int tmpa[] = {391, 938, 772, 630, 54, 775, 379, 613, 647, 8, 946, 885, 604, 822, 663, 559, 452, 565, 637, 695, 24, 515, 92, 956, 194, 551, 813, 362, 190, 268, 440, 781, 450, 789, 566, 372, 402, 860, 531, 608, 434, 761, 754, 26, 504, 873, 132, 756, 206, 93, 284, 807, 642, 637, 936, 954, 205, 303, 582, 822, 134, 269, 967, 147, 589, 549, 24, 670, 403, 105, 40, 531, 486, 695, 898, 287, 443, 542, 599, 151, 45, 567, 548, 945, 912, 764, 451, 404, 700, 522, 227, 954, 84, 347, 625, 278, 377, 730, 635, 604, 959, 845, 41, 193, 459, 532, 429, 216, 473, 415, 85, 933, 90, 643, 94, 927, 692, 99, 771, 594, 318, 627, 89, 340, 110, 488, 909, 253, 20, 114, 179, 177, 116, 42, 676, 91, 787, 437, 551, 51, 880, 336, 759, 795, 243, 727, 279, 620, 488, 607};
add.assign(tmpa, tmpa + 150);}
{int tmpa[] = {942, 79, 387, 184, 104, 981, 766, 678, 715, 998, 161, 125, 439, 532, 550, 415, 4, 467, 211, 852, 781, 577, 728, 592, 40, 971, 852, 592, 338, 555, 662, 636, 823, 122, 728, 69, 701, 476, 346, 190, 36, 535, 826, 739, 517, 551, 257, 36, 906, 171, 629, 292, 49, 29, 109, 151, 299, 180, 193, 731, 655, 877, 174, 688, 866, 957, 57, 89, 513, 765, 68, 245, 454, 968, 224, 417, 657, 383, 769, 809, 13, 51, 813, 970, 632, 357, 787, 717, 254, 645, 352, 636, 370, 950, 917, 959, 364, 453, 890, 43, 98, 438, 748, 277, 115, 298, 431, 709, 312, 49, 553, 395, 798, 58, 419, 355, 770, 818, 460, 89, 880, 515, 952, 219, 608, 284, 532, 254, 361, 524, 199, 265, 407, 782, 737, 928, 977, 729, 510, 175, 609, 81, 155, 24, 425, 186, 999, 839, 896, 721};
device.assign(tmpa, tmpa + 150);}
time = 150;
res_expected = 43325;
_run_test(height, add, device, time, res_expected, 5);
}
// @end_tests

// Born in Emacs
