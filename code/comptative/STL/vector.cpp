#include <iostream>
#include <vector>
using namespace std;

// to print vector
int print(vector<int> const &b)
{
    for (int i = 0; i < b.size(); i++)
        cout << b[i] << " ";
    cout << endl;
    return 0;
}

int main(int argc, char const *argv[])
{
    // create empty size = 0
    vector<int> a;
    if (a.empty())
        cout << "this is empty" << endl;

    // size = 5
    vector<int> b(5);
    for (int i = 0; i < b.size(); i++)
        b[i] = i;
    print(b);

    // insert and increase size
    b.push_back(b.size());
    print(b);

    // delete last element
    b.pop_back();
    print(b);

    // first and last element
    cout << b.front() << endl;
    cout << b.back() << endl;

    // delete all element
    b.clear();
    print(b);

    // initialize 2D vector
    vector<vector<int>> c(3, vector<int>(3));
    for (int i = 0; i < c.size(); i++)
    {
        for (int j = 0; j <= c[i].size(); j++)
        {
            c[i][j] = i * c[i].size() + j;
        }
    }
    // print 2D vector
    for (int i = 0; i < c.size(); i++)
    {
        print(c[i]);
    }

    return 0;
}
