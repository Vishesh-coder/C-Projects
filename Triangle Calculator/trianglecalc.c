#include <stdio.h>
#include <math.h>
#define PI 3.14159265

double toRad(double x){
    return x * PI / 180.0; 
}
double toDeg(double x){ 
    return x * 180.0 / PI; 
}

int main() {
    float a=0, b=0, c=0, A=0, B=0, C=0;
    printf("\n");
    printf("\t      A\n");
    printf("\t     /\\\n");
    printf("\t  c /  \\ b\n");
    printf("\t   /    \\\n");
    printf("\tB /______\\ C\n");
    printf("\t     a \n");
    
    printf("\nEnter any three values of triangle: \n");
    printf("If Value is unknown, Enter '0' \n");
    printf("Side AB (c): ");
    scanf("%f", &c);
    printf("Side BC (a): ");
    scanf("%f", &a);
    printf("Side CA (b): ");
    scanf("%f", &b);
    printf("Angle A: ");
    scanf("%f", &A);
    printf("Angle B: ");
    scanf("%f", &B);
    printf("Angle C: ");
    scanf("%f", &C);
    printf("\n");


    if(A!=0 && B!=0 && C!=0){
        printf("Sides cannot be calculated with only angles provided.\n");
    }

    /* SSS */
    if(a>0 && b>0 && c>0){
        if(a+b<=c || a+c<=b || b+c<=a){
            printf("Impossible triangle\n");
            return 0;
        }
        A = toDeg(acos((b*b + c*c - a*a) / (2*b*c)));
        B = toDeg(acos((a*a + c*c - b*b) / (2*a*c)));
        C = 180 - A - B;
    }

    /* SAS */
    else if(a>0 && b>0 && C>0){
        c = sqrt(a*a + b*b - 2*a*b*cos(toRad(C)));
        A = toDeg(acos((b*b + c*c - a*a)/(2*b*c)));
        B = 180 - A - C;
    }
    else if(b>0 && c>0 && A>0){
        a = sqrt(b*b + c*c - 2*b*c*cos(toRad(A)));
        B = toDeg(acos((a*a + c*c - b*b)/(2*a*c)));
        C = 180 - A - B;
    }
    else if(c>0 && a>0 && B>0){
        b = sqrt(a*a + c*c - 2*a*c*cos(toRad(B)));
        C = toDeg(acos((a*a + b*b - c*c)/(2*a*b)));
        A = 180 - B - C;
    }

    /* ASA / AAS */
    else if(A>0 && B>0 && (a>0 || b>0 || c>0)){
        C = 180 - A - B;
        if(C <= 0){ 
            printf("Impossible triangle\n"); 
            return 0; 
        }
        if(a>0){
            b = a * sin(toRad(B)) / sin(toRad(A));
            c = a * sin(toRad(C)) / sin(toRad(A));
        } else if(b>0){
            a = b * sin(toRad(A)) / sin(toRad(B));
            c = b * sin(toRad(C)) / sin(toRad(B));
        } else {
            a = c * sin(toRad(A)) / sin(toRad(C));
            b = c * sin(toRad(B)) / sin(toRad(C));
        }
    }
    else if(B>0 && C>0 && (a>0 || b>0 || c>0)){
        A = 180 - B - C;
        if(A <= 0){ 
            printf("Impossible triangle\n"); 
            return 0; 
        }
        if(b>0){
            a = b * sin(toRad(A)) / sin(toRad(B));
            c = b * sin(toRad(C)) / sin(toRad(B));
        } else if(c>0){
            a = c * sin(toRad(A)) / sin(toRad(C));
            b = c * sin(toRad(B)) / sin(toRad(C));
        } else {
            b = a * sin(toRad(B)) / sin(toRad(A));
            c = a * sin(toRad(C)) / sin(toRad(A));
        }
    }
    else if(C>0 && A>0 && (a>0 || b>0 || c>0)){
        B = 180 - A - C;
        if(B <= 0){ 
            printf("Impossible triangle\n"); 
            return 0; 
        }
        if(c>0){
            a = c * sin(toRad(A)) / sin(toRad(C));
            b = c * sin(toRad(B)) / sin(toRad(C));
        } else if(a>0){
            b = a * sin(toRad(B)) / sin(toRad(A));
            c = a * sin(toRad(C)) / sin(toRad(A));
        } else {
            a = b * sin(toRad(A)) / sin(toRad(B));
            c = b * sin(toRad(C)) / sin(toRad(B));
        }
    }

    /* SSA (Ambiguous Case) */
    else if(a>0 && b>0 && A>0){
        double rhs = (b * sin(toRad(A))) / a;
        if(rhs > 1){ 
            printf("No triangle possible\n"); 
            return 0; 
        }

        double B1 = toDeg(asin(rhs));
        double B2 = 180 - B1;

        // Choose the valid one
        if(A + B1 < 180){ 
            B = B1; 
        }
        else if(A + B2 < 180){ 
            B = B2; 
        }
        else { 
            printf("No triangle possible\n"); 
            return 0; 
        }

        C = 180 - A - B;
        c = (a * sin(toRad(C))) / sin(toRad(A));
    }

    else if(b>0 && c>0 && B>0){
        double rhs = (c * sin(toRad(B))) / b;
        if(rhs > 1){ 
            printf("No triangle possible\n"); 
            return 0; 
        }

        double C1 = toDeg(asin(rhs));
        double C2 = 180 - C1;

        if(B + C1 < 180){ 
            C = C1; 
        }
        else if(B + C2 < 180){ 
            C = C2; 
        }
        else { 
            printf("No triangle\n"); 
            return 0; 
        }

        A = 180 - B - C;
        a = (b * sin(toRad(A))) / sin(toRad(B));
    }

    else if(c>0 && a>0 && C>0){
        double rhs = (a * sin(toRad(C))) / c;
        if(rhs > 1){ 
            printf("No triangle possible\n"); 
            return 0; 
        }

        double A1 = toDeg(asin(rhs));
        double A2 = 180 - A1;

        if(C + A1 < 180){ 
            A = A1; 
        }
        else if(C + A2 < 180){ 
            A = A2; 
        }
        else { 
            printf("No triangle\n"); 
            return 0; 
        }

        B = 180 - A - C;
        b = (a * sin(toRad(B))) / sin(toRad(A));
    }

    else {
        printf("Insufficient data.\n");
        return 0;
    }

    printf("\n--- Triangle Solution ---\n");
    printf("Side a = %.4lf cm\n", a);
    printf("Side b = %.4lf cm\n", b);
    printf("Side c = %.4lf cm\n", c);
    printf("Angle A = %.4lf\n", A);
    printf("Angle B = %.4lf\n", B);
    printf("Angle C = %.4lf\n", C);

    return 0;
}
