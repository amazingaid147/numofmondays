#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <math.h>

struct numOfMonsByFirstDayOfYear nombfdoy;
struct dayOfTheYearThatIsTheTwelthOfEachMonth dotytittoem;

struct numOfMonsByFirstDayOfYear {
  int mon1;  // will contain info for if the year starts with a monday on a non leap year
  int mon2;
  int tue1;
  int tue2;    // will contain info for if the year starts with a tuesday on a leap year
  int wed1;
  int wed2;
  int thu1;
  int thu2;
  int fri1;
  int fri2;
  int sat1;
  int sat2;
  int sun1;
  int sun2;
  
}; 

struct dayOfTheYearThatIsTheTwelthOfEachMonth {
  int jan1;  
  int jan2;
  int feb1;  // will contain a number representing what day of the year feb 12th is on a non leap year
  int feb2;    
  int mar1;
  int mar2;   // will contain a number representing what day of the year mar 12th is on a leap year
  int apr1;
  int apr2;
  int may1;
  int may2;
  int jun1;
  int jun2;
  int jul1;
  int jul2;
  int aug1;
  int aug2;
  int sep1;
  int sep2;
  int oct1;
  int oct2;
  int nov1;
  int nov2;
  int dec1;
  int dec2;
  
}; 



int checkHowManyNonLeap(int firstDay){
  int numOfMons = 0;

  if (dotytittoem.jan1 % 7 == firstDay)
  {
    numOfMons ++;
  }

  if (dotytittoem.feb1 % 7 == firstDay)
  {
    numOfMons ++;
  }

  if (dotytittoem.mar1 % 7 == firstDay)
  {
    numOfMons ++;
  }

  if (dotytittoem.apr1 % 7 == firstDay)
  {
    numOfMons ++;
  }

  if (dotytittoem.may1 % 7 == firstDay)
  {
    numOfMons ++;
  }

  if (dotytittoem.jun1 % 7 == firstDay)
  {
    numOfMons ++;
  }

  if (dotytittoem.jul1 % 7 == firstDay)
  {
    numOfMons ++;
  }

  if (dotytittoem.aug1 % 7 == firstDay)
  {
    numOfMons ++;
  }

  if (dotytittoem.sep1 % 7 == firstDay)
  {
    numOfMons ++;
  }

  if (dotytittoem.oct1 % 7 == firstDay)
  {
    numOfMons ++;
  }

  if (dotytittoem.nov1 % 7 == firstDay)
  {
    numOfMons ++;
  }

  if (dotytittoem.dec1 % 7 == firstDay)
  {
    numOfMons ++;
  }

  return numOfMons;   
  }

int checkHowManyLeap(int firstDay){
  int numOfMons = 0;

  if (dotytittoem.jan2 % 7 == firstDay)
  {
    numOfMons ++;
  }

  if (dotytittoem.feb2 % 7 == firstDay)
  {
    numOfMons ++;
  }

  if (dotytittoem.mar2 % 7 == firstDay)
  {
    numOfMons ++;
  }

  if (dotytittoem.apr2 % 7 == firstDay)
  {
    numOfMons ++;
  }

  if (dotytittoem.may2 % 7 == firstDay)
  {
    numOfMons ++;
  }

  if (dotytittoem.jun2 % 7 == firstDay)
  {
    numOfMons ++;
  }

  if (dotytittoem.jul2 % 7 == firstDay)
  {
    numOfMons ++;
  }

  if (dotytittoem.aug2 % 7 == firstDay)
  {
    numOfMons ++;
  }

  if (dotytittoem.sep2 % 7 == firstDay)
  {
    numOfMons ++;
  }

  if (dotytittoem.oct2 % 7 == firstDay)
  {
    numOfMons ++;
  }

  if (dotytittoem.nov2 % 7 == firstDay)
  {
    numOfMons ++;
  }

  if (dotytittoem.dec2 % 7 == firstDay)
  {
    numOfMons ++;
  }


  return numOfMons;
  }

int findFirstDayOfYear2007(void){
  int numOfDays = 31 + 28 + 31 + 30 + 17;

  int differnceInDayOfWeek = numOfDays % 7;

  int firstDayOfYear = (2 - differnceInDayOfWeek + 1);
  return firstDayOfYear;
  }

int NumOfDaysInYear(int year){
  int NumOfDays = 0;

  if ((year % 4 == 0) & ((year % 100 != 0)| (year % 400 == 0)))
  {
    NumOfDays = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + 31;
  }

  else{
    NumOfDays = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + 31;
  }


  return NumOfDays;
}

int GetNextYearFirstDay(int year, int currentDay){
  int NewDay = 0;
  year = year - 1;

  if ((year % 4 == 0) & ((year % 100 != 0)| (year % 400 == 0))){
    int numOfDaysDifferent = (366 %7) ;
    NewDay = (currentDay + numOfDaysDifferent) %7;
    
  }

  else{
    int numOfDaysDifferent = (365 %7) ;
    NewDay = (currentDay + numOfDaysDifferent) %7;
  }


  return NewDay;
}
int findFirstDayOfYear1401(int firstDayOfYear2007){
  int NumOfDaysDifference = 0;
  int Year = 2006;

  while (Year >= 1401)
    {
      NumOfDaysDifference = NumOfDaysDifference + NumOfDaysInYear(Year);

      Year  --;
    }


  

  int firstDayOfYear1401 = (NumOfDaysDifference % 7) ;
  return firstDayOfYear1401;
  }

int main(void) {

  
  

  dotytittoem.jan1 = 12;
  dotytittoem.jan2 = 12;

  dotytittoem.feb1 = dotytittoem.jan1 + 31;
  dotytittoem.feb2 = dotytittoem.jan2 + 31;

  dotytittoem.mar1 = dotytittoem.feb1 + 28;
  dotytittoem.mar2 = dotytittoem.feb2 + 29;

  dotytittoem.apr1 = dotytittoem.mar1 + 31;
  dotytittoem.apr2 = dotytittoem.mar2 + 31;

  dotytittoem.may1 = dotytittoem.apr1 + 30;
  dotytittoem.may2 = dotytittoem.apr2 + 30;

  dotytittoem.jun1 = dotytittoem.may1 + 31;
  dotytittoem.jun2 = dotytittoem.may2 + 31;

  dotytittoem.jul1 = dotytittoem.jun1 + 30;
  dotytittoem.jul2 = dotytittoem.jun2 + 30;

  dotytittoem.aug1 = dotytittoem.jul1 + 31;
  dotytittoem.aug2 = dotytittoem.jul2 + 31;

  dotytittoem.sep1 = dotytittoem.aug1 + 31;
  dotytittoem.sep2 = dotytittoem.aug2 + 31;

  dotytittoem.oct1 = dotytittoem.sep1 + 30;
  dotytittoem.oct2 = dotytittoem.sep2 + 30;

  dotytittoem.nov1 = dotytittoem.oct1 + 31;
  dotytittoem.nov2 = dotytittoem.oct2 + 31;

  dotytittoem.dec1 = dotytittoem.nov1 + 30;
  dotytittoem.dec2 = dotytittoem.nov2 + 30;
  

  nombfdoy.mon1 = checkHowManyNonLeap(1); // will contain info for how many modays are on the twelth of a month if the year starts with a monday on a non leap year
  nombfdoy.mon2 = checkHowManyLeap(1);
  
  nombfdoy.tue1 = checkHowManyNonLeap(0);
  nombfdoy.tue2 = checkHowManyLeap(0); // will contain info for how many modays are on the twelth of a month if the year starts with a tuesday on a leap year
  
  nombfdoy.wed1 = checkHowManyNonLeap(6);
  nombfdoy.wed2 = checkHowManyLeap(6);
  
  nombfdoy.thu1 = checkHowManyNonLeap(5);
  nombfdoy.thu2 = checkHowManyLeap(5);
  
  nombfdoy.fri1 = checkHowManyNonLeap(4);
  nombfdoy.fri2 = checkHowManyLeap(4);
  
  nombfdoy.sat1 = checkHowManyNonLeap(3);
  nombfdoy.sat2 = checkHowManyLeap(3);
  
  nombfdoy.sun1 = checkHowManyNonLeap(2);
  nombfdoy.sun2 = checkHowManyLeap(2);

  int numOfMons = 0;
  int year = 1401;
  

  int firstDayOfYear2007 = findFirstDayOfYear2007();
  firstDayOfYear2007 = (abs(firstDayOfYear2007)) % 7;


  int firstDayOfYear1401 = findFirstDayOfYear1401(firstDayOfYear2007);
  int currentDay = firstDayOfYear1401;
  
  numOfMons = numOfMons + nombfdoy.thu1;
  while(year <= 1799)
    {
      year ++;
      currentDay = GetNextYearFirstDay(year,currentDay);

      if ((year % 4 == 0) & ((year % 100 != 0)| (year % 400 == 0))){
        if (currentDay == 1){
          numOfMons = numOfMons + nombfdoy.mon2;
        }

        if (currentDay == 2){
          numOfMons = numOfMons + nombfdoy.tue2;
        }

        if (currentDay == 3){
          numOfMons = numOfMons + nombfdoy.wed2;
        }

        if (currentDay == 4){
          numOfMons = numOfMons + nombfdoy.thu2;
        }

        if (currentDay == 5){
          numOfMons = numOfMons + nombfdoy.fri2;
        }

        if (currentDay == 6){
          numOfMons = numOfMons + nombfdoy.sat2;
        }

        if (currentDay == 0){
          numOfMons = numOfMons + nombfdoy.sun2;
        }
        
      }

      else{

        if (currentDay == 1){
          numOfMons = numOfMons + nombfdoy.mon1;
        }

        if (currentDay == 2){
          numOfMons = numOfMons + nombfdoy.tue1;
        }

        if (currentDay == 3){
          numOfMons = numOfMons + nombfdoy.wed1;
        }

        if (currentDay == 4){
          numOfMons = numOfMons + nombfdoy.thu1;
        }

        if (currentDay == 5){
          numOfMons = numOfMons + nombfdoy.fri1;
        }

        if (currentDay == 6){
          numOfMons = numOfMons + nombfdoy.sat1;
        }

        if (currentDay == 0){
          numOfMons = numOfMons + nombfdoy.sun1;
        }
        
      }
      
      
      

      
    }

  printf("%d",numOfMons);
  

  
}


  
  
