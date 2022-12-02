#include <iostream>

using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	for(int j=0;j<T;j++){
	    int N;
	    int count=0;
	    int stored;
	    cin>>N;
	    cout<<endl;
	    char S[N];
	    for(int i=0;i<N;i++) cin>>S[i];
	    
	    for(int i=0;i<N;i++){
	        
            if(S[i] != 'a' && S[i] != 'e' && S[i] != 'i' && S[i] != 'o' && S[i]!= 'u')  {
                count++;
                if(count==4){
                    cout<<"NO";
                    break;
                }
            }
            else count=0;
	    }
	    if(count<4) cout<<"YES";
                
	}
	return 0;
}