#include<iostream>

#include<vector>

#include <chrono>

using std::vector;

using namespace std;

using namespace std::chrono;

void tri_selection(vector<int>&V);

int main(){

   

    vector <int> V;

    int n;

    cout<<"donner la taille du tableau";

    cin>>n;

    int i=n;

    while (i>0)

    {

        V.push_back(i);

        i--;

    }

    auto start = high_resolution_clock::now();

    tri_selection(V);

    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(stop - start);

    cout << "Time taken by function: "

         << duration.count() << " microseconds" << endl;

   return (0);

}

void tri_selection(vector<int>&V){

    int min;

    int temp;

   

    for (int i = 0; i <V.size()-1 ; i++)

    {

        min=i;

        for (int j = i+1; j < V.size(); j++)

        {

            if (V[j]<V[min])

            {

                min=j;

            }

       

        }

        if (i!= min)

        {

            temp=V[min];

            V[min]=V[i];

            V[i]=temp;

           

        }

       

    }

}

