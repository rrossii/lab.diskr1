#include <iostream>
using namespace std;

void truth_table(int x, int y, int z) {
    int a1, a2, a3, a4, a5;
    a1 = y || z;
    a2 = x || a1;
    a3 = !y || !z;
    a4 = !x || a3;
    a5 = !a2 || a4;
    cout << "| " << x << " | " << y << " | " << z << " | " << a1 << "  | " << a2 << "  | " << a3 << "  | " << a4 << "  | " << a5 << "  |\n";
}
int main() {
    int x, y, z, n;

    cout << "| x | y | z | a1 | a2 | a3 | a4 | a5 |\n";
    for (x = 0; x < 2; x++) {
        for (y = 0; y < 2; y++) {
            for (z = 0; z < 2; z++) {
                truth_table(x, y, z);
            }
        }
    }

    cout << "Input an amount of expressions: ";
    cin >> n;
    while (n--) {
        cout << "\nInput the values 1 or 0 for x, y and z: ";
        cin >> x >> y >> z;
        if ((y == 0 || y == 1) && (x == 0 || x == 1) && (z == 0 || z == 1)) {
            cout << "| x | y | z | a1 | a2 | a3 | a4 | a5 |\n";
            truth_table(x, y, z);
        }
        else {
            cout << "There's no such value\n";
        }
    }
    return 0;
}
//void truth_table(int x, int y, int z) {
//    int a1, a2, a3, a4, a5;
//    a1 = y || z;
//    a2 = x || a1;
//    a3 = !y || !z;
//    a4 = !x || a3;
//    a5 = !a2 || a4;
//    cout << "| " << x << " | " << y << " | " << z << " | " << a1 << "  | " << a2 << "  | " << a3 << "  | " << a4 << "  | " << a5 << "  |\n";
//}
//int main() {
//    int x, y, z, n;
//    cout << "Input an amount of expressions: ";
//    cin >> n;
//    cout << "Input the values 1 or 0 for x, y and z: ";
//    while (n--) {
//        cin >> x >> y >> z;
//        if ((y == 0 || y == 1) && (x == 0 || x == 1) && (z == 0 || z == 1)) {
//            cout << "| x | y | z | a1 | a2 | a3 | a4 | a5 |\n";
//            for (int p = x; p <= x; p++) {
//                for (int r = y; r <= y; r++) {
//                    for (int q = z; q <= z; q++) {
//                        truth_table(x, y, z);
//                    }
//                }
//            }
//        }
//        else {
//            cout << "There's no such value\n";
//        }
//    }