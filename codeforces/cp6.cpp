#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
 
#define ppb         pop_back
#define endl        '\n'
#define pii         pair<ll int,ll int>
#define vi          vector<ll int>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (ll int)x.size()
#define hell        1000000007
#define bell        1000000009
#define rep(i,a,b)  for(ll int i=a;i<b;i++)
#define lbnd        lower_bound
#define ubnd        upper_bound 
#define bs          binary_search //bs(start_ptr,end_ptr,element) and for arrays-> bs(A,A+n,element)
#define mp          make_pair
#define present(container, element)     (container.find(element) != container.end())
#define cpresent(container, element)    (find(all(container),element) != container.end())
using namespace std;
 
//  erase(a, b) deletes b characters at index a
// (str6.find(str4) != string::npos)
//  replace(a, b, str)  replaces b characters from a index by str
 
int multiply(int x, int res[], int res_size);
ll nCr(ll n,ll r)
{
    if(r>n)
    return 0;
   
    double res=1;
    for(ll i=1;i<=r;i++)
    res=(res*(n-r+i))/i;
    return (ll)(res+0.01);
}
 
 
void mergea(int arr[],int l,int m,int r)
    {
        int n1=m-l+1;
        int n2=r-m;
 
        int L[n1],R[n2];
        rep(i,0,n1)
            L[i]=arr[l+i];
        rep(i,0,n2)
            R[i]=arr[m+1+i];
 
        int i=0,j=0,k=l;
 
        while(i<n1 && j<n2)
        {
            if(L[i]<=R[j])
            {
                arr[k]=L[i];
                i++;
            }
            else
            {
                arr[k]=R[j];
                j++;
            }
            k++;
        }
 
        while(i<n1)
        {
            arr[k]=L[i];
            i++;
            k++;
        }
 
        while(j<n2)
        {
            arr[k]=R[j];
            j++;
            k++;
        }
    }
 
 
void MergeSort(int arr[],int l,int r) // O(n) 
{
    if(l>=r)
        return;
 
    int m=l+(r-l)/2;
    MergeSort(arr,l,m);
    MergeSort(arr,m+1,r);
    mergea(arr,l,m,r);
}
 
 
void bin(unsigned n)
{
    unsigned i;
    for (i = 1 << 31; i > 0; i = i / 2)
        (n & i) ? printf("1") : printf("0");
}
 
int maxSubArraySum(int a[], int size) //KADANE's ALGO
{
    int max_so_far = INT_MIN, max_ending_here = 0;
 
    for (int i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}
 
bool checkprime(unsigned long long N) {
        int count = 0;
        for( int i = 1;i * i <=N;++i ) {
             if( N % i == 0) {
                 if( i * i == N )
                         count++;
                 else       // i < sqrt(N) and (N / i) > sqrt(N)
                         count += 2;
              }
        }
        if(count == 2)
            return true;
        else
            return false;
    }
 
//************  FOR GETTING ALL PRIMES UNDER n :  ****************
//make a bool array from 1 to n where initially all values are true.
//now for i = 2 to root(n), mark all numbers j = 2 to n as false if they are multiple of i.
//what remains true are *primes*
//things to be noted...
//always watch the constraints
//check for long long requirement
//initialize variables = 0 whenever required
//check for out of bounds exception in arrays, infinite loop, infinite memory leak
//input output file errors(also u might have missed any cin for a variable)..
// Pi=2*acos(0)
 
// to check if ith bit of a number n is 1, check (n&(1<<i))
// to set a bit at ith position ((to set means to make that bit 1)(to unset means to make it 0)) of a number n, n|=(1<<i)
//to unset a bit, n &= ~(1<<i)
//(n&(n-1)) have same set bits as n except that the rightmost set bit becomes 1
//to count number of set bits in n, just perform n&(n-1) untill n!=0 and count how many steps it took as each step decreases one rightmost bit
//a number is a power of 2 if(n && !n&(n-1)) {in the conditon, n handles the case when number is zero}
//2^n = 1<<n
//n^n=0 so in an array if we perform a[i]^a[j] for all pairs, only unique numbers will remain
 //stoi,stoll '0'-48,'9'-57,'a'-97,'z'-122,'A'-65,'Z'-90
 
//BIT_MASKING:
// n size ka array banana h  
// for(int mask=0;mask<=pow(2,n)-1;mask++) // time complexity (n*2^n)
//     {
//         for(int i=0;i<n;i++)
//         {
//             if(mask & 1<<i)
//                 cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//     }
 
int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
 
int gcd_extended(int a,int b,int& x,int& y)// jo bhi x and y hoga usme chage ho jaayegakyoki pass by reference 
{
    if(b==0)
    {
        x=1;
        y=0;
        return a;
    }
    int x1,y1;
    int d=gcd_extended(b,a%b,x1,y1);
    x=y1;
    y=x1-y1*(a/b);
    return d;
}
 
void prime_sieve(int *p){
 
    int MAX=1000000;
    for(int i=3;i<=MAX;i+=2)
        p[i]=1;
 
    for(ll i=3;i<=MAX;i+=2)
    {
        if(p[i]==1)
        {
            for(ll j=i*i;j<=MAX;j+=i)
                p[j]=0;
        }
    }
 
    p[2]=1;
    p[1]=p[0]=0;
}
 
// function to convert decimal to binary
void decToBinary(int n)
{
    // array to store binary number
    vi binary;
  
    // counter for binary array
    int i = 0;
    while (n > 0) {
  
        // storing remainder in binary array
        binary.pb(n % 2);
        n = n / 2;
    }
  
    // printing binary array in reverse order
    for (int j = binary.size()- 1; j >= 0; j--)
        cout << binary[j];
}
 
 
//***************
void factorial(int n)
{
    int MAX=500;
    int res[MAX];
 
    // Initialize result
    res[0] = 1;
    int res_size = 1;
 
    // Apply simple factorial formula n! = 1 * 2 * 3 * 4...*n
    for (int x=2; x<=n; x++)
        res_size = multiply(x, res, res_size);
 
    cout << "Factorial of given number "<<n<<" is \n";
    for (int i=res_size-1; i>=0; i--)
        cout << res[i];
}
 
// This function multiplies x with the number
// represented by res[].
// res_size is size of res[] or number of digits in the
// number represented by res[]. This function uses simple
// school mathematics for multiplication.
// This function may value of res_size and returns the
// new value of res_size
int multiply(int x, int res[], int res_size)
{
    int carry = 0;  // Initialize carry
 
    // One by one multiply n with individual digits of res[]
    for (int i=0; i<res_size; i++)
    {
        int prod = res[i] * x + carry;
 
        // Store last digit of 'prod' in res[] 
        res[i] = prod % 10; 
 
        // Put rest in carry
        carry  = prod/10;   
    }
 
    // Put carry in res and increase result size
    while (carry)
    {
        res[res_size] = carry%10;
        carry = carry/10;
        res_size++;
    }
    return res_size;
}
//************************
 
 
//************************
unsigned long int catalan_DP(unsigned int n)//exponential value h 
{
    unsigned long int catalan[n+1];
    catalan[0]=catalan[1]=1;
 
    for(int i=2;i<=n;i++){
        catalan[i]=0;
        for(int j=0;j<i;j++)
            catalan[i]+=catalan[j]*catalan[i-j-1];
    }
 
    //return last entry
    return catalan[n];
 
}
 
ll binomial_coeff(int n,int r)
{
    if(r>n-r)
        r=n-r;
    ll res=1;
    for(int i=0;i<r;i++)
    {
        res*=(n-i);
        res/=(i+1);
    }
    return res;
}
 
unsigned long int catalan_bino(unsigned int n)
{
    unsigned long int c=binomial_coeff(2*n,n);
 
    return c/(n+1);
}
//**************************
 
 
int find_odd(int arr[],int n)
{
    int res=0;
    for(int i=0;i<n;i++)
        res=res^arr[i];
 
    return res;
}
 
bool check_string(string s, int n)
{
    int cnt=0;
    rep(i,0,n)
    {
        if(s[i]=='(') cnt++;
        else cnt--;
 
        if(cnt<0) return 0;
    }
    if(cnt==0) return 1;
    else return 0;
 
 
}
 
// int no_of_permutations(int& arr[],int n)
// {
//     int count=0;
//     do{
//         if()
//         count++;
//     }while(next_permutation(arr,arr+n));
// }
bool check_palindrome(string s)
{
    int f=0;
    for(int i=0;i<s.length()/2;i++)
    {
        if(s[i]!=s[s.length()-1-i]) return false;
    }
    return true;
}
 
ll max_pow(ll a,ll p)
{
    ll res=1;
    while(p)
    {
        if(p%2==0)
        {
            a=(a*a)% hell;
            p=p/2;
        }
        else{
            res=(res*a)%hell;
            p--;
        }
    }
    return res;
}
 
void solve()
{
    ll n; cin>>n;
    ll x=0;
    while(n--)
    {
        string s; cin>>s;
        if(s=="++X" || s=="X++") x++;
        else if(s=="--X" || s=="X--") x--;
        else continue;
    }
    cout<<x<<endl;
}
 
int main()
{   //
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
 
    solve();
    // int t; cin>>t;
    // while(t--)
    // { 
    //     solve();
    // }
    return 0;
}
 
 
// vi v;
// rep(i,0,10) v.pb(i);   0 1 2 3 4 5 6 7 8 9 
// v.erase(v.begin()+1);  0 2 3 4 5 6 7 8 9 
// v.insert(v.begin(),1); 1 0 2 3 4 5 6 7 8 9 
 
//printf("%.9f\n", x);
 
 
//a-z==[97-122]
//A-Z==[65-90];
 
 
 
 
// char flip(char c) {return (c == '0')? '1': '0';}
 
// // Print 1's and 2's complement of binary number
// // represented by "bin"
// void printOneAndTwosComplement(string bin)
// {
//     int n = bin.length();
//     int i;
 
//     string ones, twos;
//     ones = twos = "";
 
//     //  for ones complement flip every bit
//     for (i = 0; i < n; i++)
//         ones += flip(bin[i]);
 
//     //  for two's complement go from right to left in
//     //  ones complement and if we get 1 make, we make
//     //  them 0 and keep going left when we get first
//     //  0, make that 1 and go out of loop
//     twos = ones;
//     for (i = n - 1; i >= 0; i--)
//     {
//         if (ones[i] == '1')
//             twos[i] = '0';
//         else
//         {
//             twos[i] = '1';
//             break;
//         }
//     }
 
//     // If No break : all are 1  as in 111  or  11111;
//     // in such case, add extra 1 at beginning
//     if (i == -1)
//         twos = '1' + twos;
 
 
//     cout << "1's complement: " << ones << endl;
//  