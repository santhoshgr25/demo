#include "Account.hxx"
#include <stdio.h>
//@req 62

//@task 116
//@task 119
//@fr 15

//@task 117




enum { BUFFER_SIZE = 1024 };

void func(FILE *file) {
  char buf[BUFFER_SIZE];

  if (fgets(buf, sizeof(buf), file) == NULL) {
    /* Set error flag and continue */
    *buf = '\0';
  }
}


double Account::deposit(double amount)
{
    myBalance += amount;


      return (getBalance());
}

//@task 118
double Account::debit(double amount)
{
    myBalance -= amount;
    return (getBalance());
}
