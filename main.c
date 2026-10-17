#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>


/*  
int main() {

    //this is my first C program
    
   int age = 0;
   float b = 0.0f;
   char c = '\0';
   char name[50]= "";

   printf("enter your age: ");
   scanf("%d", &age);

   printf("enter your gpa: ");
   scanf("%f", &b);

   printf("enter your grade: ");
   scanf(" %c", &c);

getchar(); // to consume the newline character left by previous scanf

   /* or if there are more inputs, you can use int c; while ((c = getchar())) != '\n' && c != EOF){} 
   to get rid of the newline character, where there is a loop to consume all characters until the newline or EOF. */
/*
   printf("enter your name: ");
   fgets(name, sizeof(name), stdin);

   printf("your age is: %d\n", age);
   printf("your gpa is: %.2f\n", b);
   printf("your grade is: %c\n", c);
   printf("your name is: %s\n", name);

   
    return 0;
}
*/


//================================

//shopping cart project






/*

int main() {

 int quantity = 0;
 float price = 0.0f;
 char item[50] = "";
 float total = 0.0f;
 char currency[] = "$";
 
 
 printf("Enter the item name: ");
 fgets(item, sizeof(item), stdin);
  
 item[strlen(item) - 1] = '\0'; // Remove the newline character from the item name
 
 printf("Enter the quantity: ");
 scanf("%d", &quantity);
    
    printf("Enter the price: ");
    scanf("%f", &price);

    total = quantity * price;

    int c;

    while ((c = getchar()) != '\n' && c != EOF) {} 

    printf("your total for %d %ss is = \n %c%.2f", quantity, item, currency[0], total);



    return 0;
}   
*/

//================================================

//mad libs game 

/*
int main() {

    char noun1[50] = "";
    char noun2[50] = "";
    char verb[50] = "";
    char adjective1[50] = "";
    char adjective2[50] = "";
    char adjective3[50] = "";

    printf("Enter an adjective: ");
    fgets(adjective1, sizeof(adjective1), stdin);
    adjective1[strcspn(adjective1, "\n")] = 0; // Remove newline character

    printf("Enter a noun (preferably a place): ");
    fgets(noun1, sizeof(noun1), stdin);
    noun1[strcspn(noun1, "\n")] = 0; // Remove newline character

    printf("Enter another noun (preferably an person or animal): ");
    fgets(noun2, sizeof(noun2), stdin);
    noun2[strcspn(noun2, "\n")] = 0; // Remove newline character

    printf("Enter another adjective: ");
    fgets(adjective2, sizeof(adjective2), stdin);
    adjective2[strcspn(adjective2, "\n")] = 0; // Remove newline character

    printf("Enter a verb (ending w/ -ing): ");
    fgets(verb, sizeof(verb), stdin);
    verb[strcspn(verb, "\n")] = 0; // Remove newline character

    printf("Enter one more adjective: ");
    fgets(adjective3, sizeof(adjective3), stdin);
    adjective3[strcspn(adjective3, "\n")] = 0; // Remove newline character

    printf("Today we went to the %s\n. it was surprising to see a %s\n.After that we went to a restraunt to get some food \nwe ordered the pizza and it was %s\n.After %s we went for a ski sesh it was %s\n.It was a %s day.", noun1, noun2, adjective1, verb, adjective2, adjective3);


    return 0;
}
    */



    //  ===========================================

    /*


     NOTES:
     
    int main() {

        int x = 4;
        float y = 3.14f;

        // x = sqrt(x); // This will cause a warning because sqrt returns a double, not an int. here you havent told the machine to convert the double to an int, so it may give you a warning (you can still use it tho).
        x = (int)sqrt(x); // Correct way to assign the result of sqrt to an int variable. this f(x)  explicitly tell that you dont want the decimal part of the number, making sure the machine know to remove it.

      //still can use  //x = pow(x, 4); // This will also cause a warning because pow returns a double, not an int. here you havent told the machine to convert the double to an int, so it may give you a warning (you can still use it tho).
        x = (int)pow(x, 4); // Correct way to assign the result

      //this also still works // y = round(y); // This will cause a warning because round returns a double, not a float. here you havent told the machine to convert the double to a float, so it may give you a warning (you can still use it tho).
        y = (float)round(y); // Correct way to assign the result of round to
       
      // y = ceil(y); for rounding up
      // y = floor(y); for rounding down
      // x = abs(x); for absolute value of a number from 0
      // x = log(x); for logarithm of a number
      // x = exp(x); for exponential of a number
      // x = sin(x); for sine of a number
      // x = cos(x); for cosine of a number
      // x = tan(x); for tangent of a number

        
        printf("%d\n", x);



        return 0;
    }
 


//=============================================

    */


// volume of the sphere... etc

/*

int main() {

    double radius = 0.0;
    double area = 0.0;
    double surface_area = 0.0;
    double volume = 0.0;
    const double pi = 3.14;


    printf("Enter the radius of the sphere: ");
    scanf("%lf", &radius);

    area = pi * pow(radius, 2);
    surface_area = 4 * pi * pow(radius, 2);
    volume = (4.0 / 3.0) * pi * pow(radius, 3);


    printf ("The area of the sphere is: %.2lf\n", area);
    printf ("The surface area of the sphere is: %.2lf\n", surface_area);
    printf ("The volume of the sphere is: %.2lf\n", volume);



        return 0;
}

*/


//=============================================


// compound interest calculator

/*


int main(){

    double principal = 0.0; // p
    double rate = 0.0;
    rate = rate/100; // r
    int time = 0; // this is t
    double total_amount_after_interest = 0.0; // a
    int compound_frequency = 0; // this is n
    char currency = '$';

    printf("Enter the principal amount: ");
    scanf("%lf", &principal); 

    printf("Enter the annual interest rate (in percentage): ");
    scanf("%lf", &rate);

    printf("Enter the time in years: ");
    scanf("%d", &time);

    printf("Enter the number of times interest is compounded per time frame: ");
    scanf("%d", &compound_frequency);

    total_amount_after_interest = principal * pow(1 + rate / compound_frequency, compound_frequency * time);

    printf("The total amount after interest is: %c%.2lf\n", currency, total_amount_after_interest);


    return 0;
}
    */



//=========================================
/*

int main() {

    float weight = 0.0f;
    int option = 0;

 printf("Hey this is a weight converter program\n");
 printf("option1: convert pounds to kilograms\n");
 printf("option2: convert kilograms to pounds\n");
 printf("Enter your option: ");
 scanf("%d", &option);
 printf("Enter your weight: ");
 scanf("%f", &weight);

 float inkg = weight * 2.20462; // 1 kilogram = 2.20462 pounds
 float inlb = weight / 2.20462; // 1 pound = 0.453592 kilograms


 if (option == 1) {

         printf("your weight in kilograms is: %.2f\n", inlb);
 } else if (option == 2) {
    printf("your weight in pounds is: %.2f\n", inkg);
 } else {
    printf("invalid option\n");

 }


    return 0;
}

*/

// celsius to fahrenheit converter


/* 
int main() {

    char farenheit_symbol = 'F';
    char celsius_symbol = 'C';
    float temperature = 0.0f;
    int choice = 0;

    printf("1:do you want to convert to celsius to fahrenheit?\n");
    printf("2: do you want to convert to fahrenheit to celsius?\n");
    printf("Enter your choice (1 or 2): ");
    scanf(" %d", &choice);

    printf("Enter the temperature: ");
    scanf("%f", &temperature);

     int c;

    while ((c = getchar()) != '\n' && c != EOF) {} 
    

    float fahrenheit = 9.0 / 5.0 * temperature + 32;
    float celsius = 5.0 / 9.0 * (temperature - 32);
  if (choice == 1) {
    printf("the temperature in fahrenheit is: %.2f%c\n", fahrenheit, farenheit_symbol);
    } else if (choice == 2) {
        printf("the temperature in celsius is: %.2f%c\n", celsius, celsius_symbol);
    } else {
        printf("invalid choice\n");
  }    





    return 0;
}

*/
 
/*
int main() {



    int num = 0;
    float div = 0;

    printf("put number: ");
    scanf("%d", &num);

    getchar();

    div = num % 2;

    if(!div){

        printf("is even");

    }

     else {

            printf("is odd");

        }
    




    return 0;
}  */


/*
int main(){

    int day = 1;
// it could also be char day = '\0';

    switch(day){
        case 1:  // then here it would case 'M': for monday

        printf("mon"); break;

        case 2:
        printf("tue"); break;

        default:
        printf("not a valid day"); break;

        //so on and so forth
    }



    return 0;
}
    */
/*
    int main(){

        float price = 10.00;
        bool student = true;
        bool senior = false;

        if(student){
            if(senior){
            printf("%20 caus senior");
            printf("you get %10 discount cus student");
            price *= 0.7;
            }
            else{
                printf("only student discount of 10%");
                price *= 0.9;
            }

        } else {
            printf("youre a senior disc of 20%");
        }

        printf("total price is $%.2f\n", price);


        return 0;
    }  */


    int main(){

        printf("hello world\n");
        





        return 0;
    }
