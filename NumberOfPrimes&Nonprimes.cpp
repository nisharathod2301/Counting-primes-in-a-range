// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<cmath>
using namespace std;

int main() {
    int left = 10;
    int right = 19;
    int len = right-left+1;
    vector <int> op;
    vector<int> vec;
    int count=left;
    vec.insert(vec.begin(),len, 0);
    bool flag = 0;
    int totalp=0;
    int np=0;
    int r=0;
    
    // cout<<sqrt(10);
    for(int i =0; i<vec.size();i++){
        vec[i]=count++;
        for(int j =2;j<=ceil(sqrt(vec[i]));j++){
            if(vec[i]%j==0){
                flag=1;
                break;
            }
        }
        if(flag==1){
            // cout<<vec[i]<<"is not prime"<<endl;
            totalp++;
            flag=0;
        }
        else{
            // cout<<vec[i]<<"FOUND"<<endl;
            np++;
        }
    }
    cout<<"Total non prime "<<totalp<<endl<<"Total prime "<<np;
    
    return 0;
}
// 1.Iterate through the given range of array, check how many of them are prime numbers
// 2. insert these numbers in seperate array
// 3. Look for base condition if there are less than 2 prime numbers in the range
// 4. now for this new array make a variable count and iterate through it for each consecutive numbers, upadate count variable if new is less than the previous one><?@:}{?><
