/*
You manage a travel agency and you want your n drivers to input their following details:
1. Name
2. Driving license No
3. Route
4. Kms
your program should be able to take n as input (or you can take n=3 for simplicity)
and your drivers will start inputting their details one by one.

Your program should print details of the drivers in a beautiful fashion.
solve this problem using structure
*/
#include<stdio.h>
#include<string.h>
#include<conio.h>
typedef struct TravelAgencyManager
{
    char name[12];
    int license_no;
    char route[20];
    float km;
    }TAM;

int main(){
    TAM d1, d2, d3;
    printf("\n----------Enter the details of driver no. 1----------\n\n");
    printf("Enter the name of driver no. 1:\n");
    scanf("%s",&d1.name);
    printf("Enter the license no. of driver no. 1:\n");
    scanf("%d",&d1.license_no);
    printf("Enter the route of driver no. 1:\n");
    scanf("%s",&d1.route);
    printf("Enter the distance travelled by the driver no. 1:\n");
    scanf("%f",&d1.km);


    printf("\n----------Enter the details of driver no. 2----------\n\n");
    printf("Enter the name of driver no. 2:\n");
    scanf("%s",&d2.name);
    printf("Enter the license no. of driver no. 2:\n");
    scanf("%d",&d2.license_no);
    printf("Enter the route of driver no. 2:\n");
    scanf("%s",&d2.route);
    printf("Enter the distance travelled by the driver no. 2:\n");
    scanf("%f",&d2.km);

    
    printf("\n----------Enter the details of driver no. 3----------\n\n");
    printf("Enter the name of driver no. 3:\n");
    scanf("%s",&d3.name);
    printf("Enter the license no. of driver no. 3:\n");
    scanf("%d",&d3.license_no);
    printf("Enter the route of driver no. 3:\n");
    scanf("%s",&d3.route);
    printf("Enter the distance travelled by the driver no. 3:\n");
    scanf("%f",&d3.km);
    

    printf("\n**********Printing information of these drivers**********\n\n");
    printf("For driver No 1:\nName is: %s\n",d1.name);
    printf("For driver No 1:\nLicense No is: %d\n",d1.license_no);
    printf("For driver No 1:\nRoute is: %s\n",d1.route);
    printf("For driver No 1:\nDistance travelled is: %f\n",d1.km);
    
    printf("For driver No 2:\nName is: %s\n",d2.name);
    printf("For driver No 2:\nLicense No is: %d\n",d2.license_no);
    printf("For driver No 2:\nRoute is: %s\n",d2.route);
    printf("For driver No 2:\nDistance travelled is: %f\n",d2.km);
    
    printf("For driver No 3:\nName is: %s\n",d3.name);
    printf("For driver No 3:\nLicense No is: %d\n",d3.license_no);
    printf("For driver No 3:\nRoute is: %s\n",d3.route);
    printf("For driver No 3:\nDistance travelled is: %f\n",d3.km);


    
    return 0;
}