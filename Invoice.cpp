#include <iostream>
#include "Invoice.h"

using namespace std;

Invoice::Invoice(string no, string desc, int num, int price)
 : no(no), description(desc), num(num), price(price) {}
