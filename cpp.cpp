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

// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main(){

//     float a,b,c,n;
//     cin>>a>>b>>c>>n;
//     float y;

//     // ax+by+c=0;

//     // for(float i=1;i<=n;i=i+2){
// float x=0,i=1;

//         while(x!=n)
//         {

//      y=(a*i+c)/b;
//      y=-(y);
//             // cout<<setprecision(3)<<(y)<<endl;
//             printf("%.2f\n",y);
//             i=i+2;
//             x++;

//         }
//             // a*i+b*(y)+c=0;
//             // a*i+c=-b*y;
//             // y=(a*i+c)/b;
//             // cout<<y<<endl;

//     // }

// return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {

//     string s;
//     cin >> s;
//     int val = 0;

//     int d = s.size();

//     string td = "";

//     for (int i = 0; i < s.size(); i++)
//     {

//         td += s[i];

//         int x = stoi(td);

//         if (x % d == 0)
//         {

//             // cout << x << "%" << d << "YES" << endl;
//             val++;
//         }
//         else
//         {
//             // cout << x << "%" << d << "NO" << endl;
//         }
//         d--;

//         //cout << td << endl;
//     }

//     if (val == s.size())
//     {
//         cout << "YES" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }

//     return 0;
// }

#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>

using namespace std;

int main()
{

    int n;
    int rn;
    cin >> n;
    int ans = 0;
    int x = 0;
    string s = "0";
    int final = 0;

    while (x != 10)
    {
        string rev = to_string(n);
        string ori = to_string(n);

        reverse(rev.begin(), rev.end());

        // cout << ori << " : " << rev << endl;

        int one = stoi(ori);
        int two = stoi(rev);

        if (ori.size() == 2)
        {

            //  cout<<"Two digit"<<endl;
            ori = ori + "0";

            // cout<<"TWO TWO"<<ori<<endl;
        }

        if (ori.size() == 1)
        {

            // cout<<"One digit"<<endl;
            one = one + (one * 100);
            // cout<<"ONE ONE ONE "<<endl;
        }

        int ans = stoi(ori) - stoi(rev);

        n = ans;

        // cout<<setw(3)<<setfill('0')<<ans<<endl;

        if (ans == 495 || ans == -495)
        {
            // cout<<"REACHED AT : "<<x+1<<endl;
            final = x + 1;
        }

        x++;
    }

    if (final == 0)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << final << endl;
    }

    return 0;
}