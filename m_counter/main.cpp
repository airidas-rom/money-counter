#include <iostream>
using namespace std;

int main() {
    double hundred_paper; // 100 eur
    double fifty_paper; // 50 eur
    double twenty_paper; // 20 eur
    double ten_paper; // 10 eur
    double five_paper; // 5 eur
    double two_metal; // 2 eur
    double one_metal; // 1 eur
    double fifty_cent; // 0.50 eur
    double twenty_cent; // 0.20 eur 
    double ten_cent; // 0.10 eur
    double five_cent; // 0.05 eur
    double two_cent; // 0.02 eur
    double one_cent; // 0.01 eur
    double paypal; // paypal balance

    
  cout << "Money Counter" << endl;
  cout << "100 Paper : ";
  cin >> hundred_paper;
  cout << "50 Paper : ";
  cin >> fifty_paper;
  cout << "20 Paper : ";
  cin >> twenty_paper;
  cout << "10 Paper : ";
  cin >> ten_paper;
  cout << "5 Paper : ";
  cin >> five_paper;
  cout << "2 Metal : ";
  cin >> two_metal;
  cout << "1 Metal : ";
  cin >> one_metal;
  cout << "0.50 Cent : ";
  cin >> fifty_cent;
  cout << "0.20 Cent : ";
  cin >> twenty_cent;
  cout << "0.10 Cent : ";
  cin >> ten_cent;
  cout << "0.05 Cent : ";
  cin >> five_cent;
  cout << "0.02 Cent : ";
  cin >> two_cent;
  cout << "0.01 Cent : ";
  cin >> one_cent;
  cout << "///////////////////////////////////////////////////////////////////" << endl;
  double paper = hundred_paper * 100 + fifty_paper * 50 + twenty_paper * 20 + ten_paper * 10 + five_paper * 5;
  double metal_cent = two_metal * 2 + one_metal * 1 + fifty_cent * 0.50 + twenty_cent * 0.20 + ten_cent * 0.10 + five_cent * 0.05 + two_cent * 0.02 + one_cent * 0.01; 
  double total = paper + metal_cent;
  cout << "Paper/Cash : " << paper << endl;
  cout << "Metal/Cash : " << metal_cent << endl;
  //cout << "Paypal : " << paypal << endl;
  cout << "===================================================================" << endl;
  cout << "Total : " << total << "$" << endl;
  system("pause");
  


  return 0;
}