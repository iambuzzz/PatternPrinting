#include<stdio.h>
void rectangle_pattern();
void rightangletriangle_pattern();
void invertedrightangletriangle_pattern();
void reverserightangletriangle_pattern();
void invertedreverserightangletriangle_pattern();
void numberrightangletriangle_pattern();
void numberreverserightangletriangle_pattern();
void alphabetsquare_pattern();
void alphabetrightangletriangle_pattern();
void alphabetandnumberrightangletriangle_pattern();
void rightangletriangleof01_pattern();
void plus_pattern();
void hollowrectangle_pattern();
void cross_pattern();
void rhombus_pattern();
void starpyramid_pattern();
void numberpyramid_pattern();
void numberpyramidmast_pattern();
void diamond_pattern();
void butterfly_pattern();
void lowerhalfbutterflyofnumbers_pattern();
void pascal_triangle();
int factorial(int n);
int ncr(int n,int r);
int main(){
    printf("Welcome to the pattern World ! \n");
    int select;
    while(1){
        printf("0. exit the program\n1. rectangle_pattern\n2. right_angle_triangle_pattern\n3. inverted_right_angle_triangle_pattern\n4. reverse_right_angle_triangle_pattern\n5. inverted_reverse_right_angle_triangle_pattern\n6. number_right_angle_triangle_pattern\n7. number_reverse_right_angle_triangle_pattern\n8. alphabet_square_pattern\n9. alphabet_right_angle_triangle_pattern\n10. alphabet_and_number_right_angle_triangle_pattern\n11. right_angle_triangle_of_01_pattern\n12. plus_pattern\n13. hollow_rectangle_pattern\n14. cross_pattern\n15. rhombus_pattern\n16. star_pyramid_pattern\n17. number_pyramid_pattern\n18. number_pyramid_mast_patter\n19. diamond_pattern\n20. butterfly_pattern\n21. lower_half_butterfly_of_numbers_pattern\n22. pascal_triangle\n");
        printf("\n");
        printf("Enter the number assigned to the pattern : ");
        scanf("%d",&select);
        printf("\n");
        if(select==0){
            break;
        }
        else{
            switch(select){
                case 1 : rectangle_pattern(); break;
                case 2 : rightangletriangle_pattern();break;
                case 3 : invertedrightangletriangle_pattern();break;
                case 4 : reverserightangletriangle_pattern();break;
                case 5 : invertedreverserightangletriangle_pattern();break;
                case 6 : numberrightangletriangle_pattern();break;
                case 7 : numberreverserightangletriangle_pattern();break;
                case 8 : alphabetsquare_pattern();break;
                case 9 : alphabetrightangletriangle_pattern();break;
                case 10 : alphabetandnumberrightangletriangle_pattern();break;
                case 11 : rightangletriangleof01_pattern();break;
                case 12 : plus_pattern();break;
                case 13 : hollowrectangle_pattern();break;
                case 14 : cross_pattern();break;
                case 15 : rhombus_pattern();break;
                case 16 : starpyramid_pattern();break;
                case 17 : numberpyramid_pattern();break;
                case 18 : numberpyramidmast_pattern();break;
                case 19 : diamond_pattern();break;
                case 20 : butterfly_pattern();break;
                case 21 : lowerhalfbutterflyofnumbers_pattern();break;
                case 22 : pascal_triangle();break;
                default : printf("Enter a valid input !");
            }
        }    
    }    
    return 0;
}
void rectangle_pattern(){
    int r,c;
    char ch;
    //for taking input
    printf("Enter number of rows : ");
    scanf("%d",&r);
    printf("Enter number of columns : ");
    scanf("%d",&c);printf("\n");
    // pattern
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            printf("* ");
        }
        printf("\n");
    }printf("\n");  
}
void rightangletriangle_pattern(){
    int r;
    printf("enter number of rows : ");
    scanf("%d",&r);printf("\n");
    //pattern
    for(int i=1;i<=r;i++){
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }printf("\n");
}
void invertedrightangletriangle_pattern(){
    int r;
    printf("enter number of rows : ");
    scanf("%d",&r);printf("\n");
    //pattern
    for(int i=1;i<=r;i++){
        for(int j=1;j<=r-i;j++){
            printf("  ");
        }
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }printf("\n");
}
void reverserightangletriangle_pattern(){
    int r;
    printf("enter number of rows : ");
    scanf("%d",&r);printf("\n");
    //pattern
    for(int i=1;i<=r;i++){
        for(int j=1;j<=r+1-i;j++){
            printf("* ");
        }
        printf("\n");
    }printf("\n");
}
void invertedreverserightangletriangle_pattern(){
    int r;
    printf("enter number of rows : ");
    scanf("%d",&r);printf("\n");
    //pattern
    for(int i=1;i<=r;i++){
        for(int j=1;j<i;j++){
            printf("  ");
        }
        for(int j=1;j<=r+1-i;j++){
            printf("* ");
        }
        printf("\n");
    }printf("\n");
}
void numberrightangletriangle_pattern(){
    int r;
    printf("enter number of rows : ");
    scanf("%d",&r);printf("\n");
    //pattern
    for(int i=1;i<=r;i++){
        int n=1;
        for(int j=1;j<=i;j++){
            printf("%d ",n);
            n++;
        }
        printf("\n");
    }printf("\n");
}
void alphabetrightangletriangle_pattern(){
    int r;
    printf("enter number of rows : ");
    scanf("%d",&r);printf("\n");
    //pattern
    for(int i=1;i<=r;i++){
        char ch='A';
        for(int j=1;j<=i;j++){
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }printf("\n");
}
void numberreverserightangletriangle_pattern(){
    int r;
    printf("enter number of rows : ");
    scanf("%d",&r);printf("\n");
    //pattern
    for(int i=1;i<=r;i++){
        int n=1;
        for(int j=1;j<=r+1-i;j++){
            printf("%d ",n);
            n++;
        }
        printf("\n");
    }printf("\n");
}
void alphabetsquare_pattern(){
    int r;
    printf("enter number of rows : ");
    scanf("%d",&r);printf("\n");
    //pattern
    for(int i=1;i<=r;i++){
        char ch='A';
        for(int j=1;j<=r;j++){
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }printf("\n");
}
void alphabetandnumberrightangletriangle_pattern(){
    int r;
    printf("enter number of rows : ");
    scanf("%d",&r);printf("\n");
    //pattern
    for(int i=1;i<=r;i++){
        int n=1;
        char ch='A';
        if(i%2!=0){
            for(int j=1;j<=i;j++){
                printf("%d ",n);
                n++;
            }
            printf("\n");
        }
        else{
           for(int j=1;j<=i;j++){
                printf("%c ",ch);
                ch++;
            }
            printf("\n"); 
        }
        
    }printf("\n");
}
void rightangletriangleof01_pattern(){
    int r;
    printf("enter number of rows : ");
    scanf("%d",&r);printf("\n");
    for(int i=1;i<=r;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0) printf("1 ");
            else printf("0 ");
        }
        printf("\n");
    }printf("\n");
}
void plus_pattern(){
    int r;
    printf("enter odd number of rows : ");
    scanf("%d",&r);printf("\n");
    //pattern
    int mid=(r/2)+1;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=r;j++){
            if(j==mid || i==mid){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }printf("\n");
}
void hollowrectangle_pattern(){
    int r,c;
    printf("enter number of rows : ");
    scanf("%d",&r);
    printf("enter number of columns : ");
    scanf("%d",&c);printf("\n");
    //pattern
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            if(i==1||i==r||j==1||j==c){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }printf("\n");
}
// void cross_pattern(){ // FIRST ATTEMPT
//     int r;
//     printf("enter odd number of rows : ");
//     scanf("%d",&r);
//     //pattern
//     int si=1;
//     int ei=r;
//     int count=0;
//     for(int i=1;i<=r;i++){
//         if(count==0){
//             for(int j=1;j<=r;j++){
//                 if(j==si|| j==ei){
//                     printf("* ");
//                 }
//                 else{
//                     printf("  ");
//                 }
//             }
//             printf("\n");
//             si++;
//             ei--;
//             if(si==ei){
//                 count=1;
//             }
//         }
//         else{
//             for(int j=1;j<=r;j++){
//                 if(j==si|| j==ei){
//                     printf("* ");
//                 }
//                 else{
//                     printf("  ");
//                 }
//             }
//             printf("\n");
//             si--;
//             ei++;

//         }    
//     }
    
// }
void cross_pattern(){
    int r;
    printf("enter odd number of rows : ");
    scanf("%d",&r);printf("\n");
    //pattern
    for(int i=1;i<=r;i++){
        for(int j=1;j<=r;j++){
            if(j==i || (i+j)==(r+1)){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }printf("\n");
}
void rhombus_pattern(){
    int r;
    printf("enter number of rows : ");
    scanf("%d",&r);printf("\n");
    //pattern
    for(int i=1;i<=r;i++){
        for(int j=1;j<=r-i;j++){
            printf("  ");
        }
        for(int j=1;j<=r;j++){
            printf("* ");
        }
        printf("\n");
    }printf("\n");
}
void starpyramid_pattern(){
    int r;
    printf("enter number of rows : ");
    scanf("%d",&r);printf("\n");
    //pattern
    for(int i=1;i<=r;i++){
        for(int j=1;j<=r-i;j++){
            printf("  ");
        }
        for(int j=1;j<=(2*i-1);j++){
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
}
void numberpyramid_pattern(){
    int r;
    printf("enter number of rows : ");
    scanf("%d",&r);printf("\n");
    //pattern
    for(int i=1;i<=r;i++){
        int n=1;
        for(int j=1;j<=r-i;j++){
            printf("  ");
        }
        for(int j=1;j<=(2*i-1);j++){
            printf("%d ",n);
            n++;
        }
        printf("\n");
    }
    printf("\n");
}
void numberpyramidmast_pattern(){
    int r;
    printf("enter number of rows : ");
    scanf("%d",&r);printf("\n");
    //pattern
    for(int i=1;i<=r;i++){
        int n=1;
        for(int j=1;j<=r-i;j++){
            printf("  ");
        }
        for(int j=1;j<=i;j++){
            printf("%d ",n);
            n++;
        }
        n=n-2;
        for(int j=1;j<=(i-1);j++){
            printf("%d ",n);
            n--;
        }
        printf("\n");
    }
    printf("\n");
}
void diamond_pattern(){ 
    int r;
    printf("enter odd number of rows : ");
    scanf("%d",&r);printf("\n");
    //pattern using some variables
    int nsp,nst;
    if(r%2!=0){
        nsp=(r/2)+1; // number of spaces
    }
    else{
        nsp=r/2;
    }
    nst=1; // number of stars
    int mid=nsp;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=nsp;j++){
            printf("  ");
        }
        for(int j=1;j<=nst;j++){
            printf("* ");
        }
        if(i<mid){
            nsp--;
            nst+=2;
        }
        else{
            nsp++;
            nst-=2;
        }
        printf("\n");
    }
    printf("\n");
}
void butterfly_pattern(){
    int r;
    printf("enter number of rows : ");
    scanf("%d",&r);printf("\n");
    //pattern
    int nst=1;
    int nsp=2*r-2;
    int mid=r/2 +1;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=nst;j++){
            printf("* ");
        }
        for(int j=1;j<=nsp;j++){
            printf("  ");
        }
        for(int j=1;j<=nst;j++){
            printf("* ");
        }
        nst++;
        nsp-=2;
        printf("\n");
    }
    nst--;
    nsp+=2;
    for(int i=r;i>=1;i--){
        for(int j=1;j<=nst;j++){
            printf("* ");
        }
        for(int j=1;j<=nsp;j++){
            printf("  ");
        }
        for(int j=1;j<=nst;j++){
            printf("* ");
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
    printf("\n");
}
void lowerhalfbutterflyofnumbers_pattern(){
    int r;
    printf("enter number of rows : ");
    scanf("%d",&r);printf("\n");
    //pattern
    int nsp=1;
    for(int i=1;i<= 2*r -1;i++){
        printf("%d ",i);
    }
    printf("\n");
    for(int i=1;i<r;i++){
        int n=1;
        for(int j=1;j<=r-i;j++){
            printf("%d ",n);
            n++;
        }
        for(int j=1;j<=nsp;j++){
            printf("  ");
            n++;
        }
        nsp+=2;
        for(int j=1;j<=r-i;j++){
            printf("%d ",n);
            n++;
        }
        printf("\n");
    }
    printf("\n");
}
void pascal_triangle(){
    int r;
    printf("enter number of rows : ");
    scanf("%d",&r);printf("\n");
    //pattern
    int n=0;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=r-i;j++){
            printf(" ");
        }
        int r=0;
        for(int j=1;j<=2*i-1;j++){
            if(j%2!=0){
                printf("%d",ncr(n,r));
                r++;
            }
            else{
                printf(" ");
            }
            
        }
        n++;
        printf("\n");
    }
    printf("\n");
}
int factorial(int n){
    int fact=1;
    if(n==1||n==0){
        return 1;
    }
    else{
        for(int i=2;i<=n;i++){
            fact=fact*i;
        }
        return fact;
    }
}
int ncr(int n,int r){
    int NCR= factorial(n)/(factorial(r)*factorial(n-r));
    return NCR;
}