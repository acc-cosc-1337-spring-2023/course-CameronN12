#include<iostream>
#include<vector>

using std::vector; using std::cout;

int main()
{
    vector<int> nums;//creates an empty vector
    cout<<nums.size()<<"\n";
    cout<<nums.capacity()<<"\n\n";

    nums.push_back(4);//add 4 to the vector(list)
    cout<<nums.size()<<"\n";
    cout<<nums.capacity()<<"\n\n";

    nums.push_back(10);//add 10 to the vector(list)
    cout<<nums.size()<<"\n";
    cout<<nums.capacity()<<"\n\n";

    nums.push_back(11);//add 11 to the vector(list)
    cout<<nums.size()<<"\n";
    cout<<nums.capacity()<<"\n\n";

    nums.push_back(5);//add 5 to the vector(list)
    cout<<nums.size()<<"\n";
    cout<<nums.capacity()<<"\n\n";

    nums.push_back(50);//add 50 to the vector(list)
    cout<<nums.size()<<"\n";
    cout<<nums.capacity()<<"\n\n"; //capacity doubled

    vector<char> letters {'a', 'b', 'c'};
    cout<<letters.size()<<"\n";
    cout<<letters.capacity()<<"\n\n"; //capacity doubled

    letters.push_back('d');
    cout<<letters.size()<<"\n";
    cout<<letters.capacity()<<"\n\n"; //capacity doubled

    //create vector
    vector<char> all_As(10, 'a');
    
    for(auto ch: all_As)
    {
        cout<<ch;
    }

    cout<<"\n\n";

    return 0;
}