#include <stdio.h>

int main (){
    float z1,i1,z2,i2,z3,i3,z4,i4;

    printf("\n\n\t---- AC Circuit Problems ----\n\n");

    do
    {
        printf("\t  ------ RL Circuit ------\n\n");
        printf("                             100ohm\n\n");
        printf("               _____________/\\/\\/\\/\\______________\n");
        printf("              |                                   |\n");
        printf("              |                                   |\n");
        printf("             _|_                                  |_\n");
        printf("            /   \\                                 _/\n");
        printf("200V, 50Hz | /\\/ |                                _/ 100mH\n");
        printf("            \\___/                                 _/\n");
        printf("              |                                   |\n");
        printf("              |                                   |\n");
        printf("              |___________________________________|\n\n");

        printf("Calculate The Impedance(Z) and Current(I) flowing in the Circuit:\n");
        printf("\tZ (Only Real Part) in ohms: ");
        scanf("%f", &z1);
        printf("\tI in Amps: ");
        scanf("%f", &i1);
        
        if((z1<104.5 || z1>105) && (i1>1.905 && i1<1.914)){
            printf("\nWrong Impedance! \n\n");
        }
        else if((z1>104.5 && z1<105) && (i1<1.905 || i1>1.914)){
            printf("\nWrong Current! \n\n");
        }
        else if((z1<104.5 || z1>105) && (i1<1.905 || i1>1.914)){
            printf("\nWrong Impedance and Current! \n\n");
        }

    } while ((z1<104.5 || z1>105) || (i1<1.905 || i1>1.914));
    
    printf("\nCORRECT !!\n\n");

    do
    {
        printf("\t------ RC Circuit ------\n\n");
        printf("            50ohm           0.1mF\n\n");
        printf("    ______/\\/\\/\\/\\__________|  |_______\n");
        printf("   |                        |  |       |\n");
        printf("   |                                   |\n");
        printf("   |                                   |\n");
        printf("   |                                   |\n");
        printf("   |                                   |\n");
        printf("   |                                   |\n");
        printf("   |                ___                |\n");
        printf("   |               /   \\               |\n");
        printf("   |______________| /\\/ |______________|\n");
        printf("                   \\___/\n\n");
        printf("                 100V, 50Hz\n\n");

        printf("Calculate The Impedance(Z) and Current(I) flowing in the Circuit:\n");
        printf("\tZ (Only Real Part) in ohms: ");
        scanf("%f", &z2);
        printf("\tI in Amps: ");
        scanf("%f", &i2);

        if((z2<59.00 || z2>59.40) && (i2>1.60 && i2<1.75)){
            printf("\nWrong Impedance! \n\n");
        }
        else if((z2>59.00 && z2<59.40) && (i2<1.60 || i2>1.75)){
            printf("\nWrong Current! \n\n");
        }
        else if((z2<59.00 || z2>59.40) && (i2<1.60 || i2>1.75)){
            printf("\nWrong Impedance and Current! \n\n");
        }
    } while ((z2<59.00 || z2>59.40) || (i2<1.60 || i2>1.75));

    printf("\nCORRECT !!\n\n");    
    
    do
    {
        printf("\t------ LC Circuit ------\n\n");
        printf("                              0.2mF\n\n");
        printf("               _______________|  |________________\n");
        printf("              |               |  |                |\n");
        printf("              |                                   |\n");
        printf("             _|_                                  |_\n");
        printf("            /   \\                                 _/\n");
        printf("250V, 50Hz | /\\/ |                                _/ 5mH\n");
        printf("            \\___/                                 _/\n");
        printf("              |                                   |\n");
        printf("              |                                   |\n");
        printf("              |___________________________________|\n\n");
        
        printf("Calculate The Impedance(Z) and Current(I) flowing in the Circuit:\n");
        printf("\tZ (Only Real Part) in ohms: ");
        scanf("%f", &z3);
        printf("\tI in Amps: ");
        scanf("%f", &i3);
        
        if((z3<14.3 || z3>14.4) && (i3>17.4 && i3<17.5)){
            printf("\nWrong Impedance! \n\n");
        }
        else if((z3>14.3 && z3<14.4) && (i3<17.4 || i3>17.5)){
            printf("\nWrong Current! \n\n");
        }
        else if((z3<14.3 || z3>14.4) && (i3<17.4 || i3>17.5)){
            printf("\nWrong Impedance and Current! \n\n");
        }
    } while ((z3<14.3 || z3>14.4) || (i3<17.4 || i3>17.5));
    
    printf("\nCORRECT !!\n\n");    

    do
    {
        printf("\t------ RLC Circuit ------\n\n");
        printf("                      75ohm            0.6mF\n\n");
        printf("               ______/\\/\\/\\/\\__________|  |_______\n");
        printf("              |                        |  |       |\n");
        printf("              |                                   |\n");
        printf("             _|_                                  |_\n");
        printf("            /   \\                                 _/\n");
        printf("220V, 50Hz | /\\/ |                                _/ 3mF\n");
        printf("            \\___/                                 _/\n");
        printf("              |                                   |\n");
        printf("              |                                   |\n");
        printf("              |___________________________________|\n");
        
        printf("Calculate The Impedance(Z) and Current(I) flowing in the Circuit:\n");
        printf("\tZ (Only Real Part) in ohms: ");
        scanf("%f", &z4);
        printf("\tI in Amps: ");
        scanf("%f", &i4);
        
        if((z4<79.10 || z4>79.20) && (i4>2.70 && i4<2.80)){
            printf("\nWrong Impedance! \n\n");
        }
        else if((z4>79.10 && z4<79.20) && (i4<2.70 || i4>2.80)){
            printf("\nWrong Current! \n\n");
        }
        else if((z4<79.10 || z4>79.20) && (i4<2.70 || i4>2.80)){
            printf("\nWrong Impedance and Current! \n\n");
        }
    } while ((z4<79.10 || z4>79.20) || (i4<2.70 || i4>2.80));
    
    printf("\nCORRECT !!\n Well Done !!!\n\n");    
    
    return 0;
}