// #include<iostream>
// #include<vector>

// using namespace std;
// int main(){

//     vector<int> ftr;
//     vector<int> ftr1;
//     vector<int> ftr2;


//     int n;
//     cin>>n;

//     int x=0;


//     for(int i=1; i<=n; i++)
//     {
//         if(n%i==0)
//         {
//             ftr.push_back(i);

//             x++;



//         }
//     }

    


//     int hl=ftr.size()/2;


//     for(int i=0; i<hl; i++)
//     {

//         // cout<<ftr.at(i)<<endl;
//         ftr1.push_back(ftr.at(i));


//     }


//     for(int i=x-1; i>=hl; i--)
//     {

//         // cout<<ftr.at(i)<<endl;
//         ftr2.push_back(ftr.at(i));


//     }


//     for(int i=0;i<hl;i++)
//     {

//         cout<<ftr1.at(i)<<","<<ftr2.at(i)<<endl;
//     }


   

// return 0;
// }

 
#include <iostream>
#include <iomanip>
using namespace std;
int main(){

    float a,b,c,n;
    cin>>a>>b>>c>>n;
    float y;

    // ax+by+c=0;


    // for(float i=1;i<=n;i=i+2){
float x=0,i=1;

        while(x!=n)
        {
            
     y=(a*i+c)/b;
     y=-(y);
            // cout<<setprecision(3)<<(y)<<endl;
            printf("%.2f\n",y);
            i=i+2;
            x++;

        }
            // a*i+b*(y)+c=0;
            // a*i+c=-b*y;
            // y=(a*i+c)/b;
            // cout<<y<<endl;






    // }


   
return 0;
}