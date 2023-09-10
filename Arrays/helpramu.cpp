#include<iostream>
using namespace std;

int main() {
    int t;  //number of test cases
    cin>>t;

    int c1,c2,c3,c4;  

    int rick[1005],cab[1005];

    int n,m;

    while(t--) {
        cin>>c1>>c2>>c3>>c4;

        cin>>n>>m;  //number of rickshaw & cab available

        for(int i=0; i<n; i++) {
            cin>>rick[i];  //input the number to ride ith rickshaw
        }

        for(int i=0; i<m; i++) {
            cin>>cab[i];  //input the number to ride ith cab
        }

        int rickcost =0;
        for(int i=0; i<n; i++) {
            rickcost+=min(c1*rick[i],c2);
        }

        rickcost=min(rickcost,c3);

        int cabcost =0;
        for(int i=0; i<m; i++) {
            cabcost+=min(c1*cab[i],c2);
        }

        cabcost=min(cabcost,c3);

        int total_cost=rickcost+cabcost;

        int final_ans=min(c4,total_cost);
        cout<<final_ans<<endl;

    }
    return 0;


}