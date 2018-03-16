#include<iostream>
#include<fstream>
using namespace std;
int S[100];
int n;
int k=1;
int read_data()
{
fstream f;
f.open("input.dat",ios::in);
f>>n;}

 int factorial (){
 for(int i=1;i<n;i++){
 k=k*(i=1);}}



int init_data()
{
for(int i=1;i<=n;i++) S[i]=n-i+1;
}

int sort_data(int some_data[],int from_start,int to_final)
{
int done=0;
while (done==0)
    {
      done=1;
      for(int i=from_start;i<=to_final-1;i++)
        {
           if (some_data[i]>some_data[i+1])
            {
              swap(some_data[i],some_data[i+1]);
              done=0;
            }
        }
       to_final=to_final-1;
    }
}

int print_data()
{cout<<endl;
for(int i=1;i<=n;i++)
    {
     cout<<S[i]<<" ";
    }
}

int search_index()
{
int carrier=n;
while ( (carrier>=1) && (S[carrier]<S[carrier-1]) ) carrier--;
return carrier;
}


int main()
{
read_data();
init_data();
print_data();
cout<<endl<<search_index();
sort_data(S,1,n);
print_data();
return 0;

}

