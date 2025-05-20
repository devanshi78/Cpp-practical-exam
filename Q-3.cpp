// Q3. (Vector with Class – Product List)
// Create a Product class with attributes name and price. Use a vector to store multiple
// products. Input and display all product details.
#include<iostream>
#include<vector>

using namespace std;

class Product{
    public:
        string name;
        float price;

        Product(string n, float p){
            name = n;
            price = p;
        }
};

int main()
{
    vector<Product> product;
    int n;

    cout<<"Enter number of product : ";
    cin>>n;

    for(int i = 0; i < n; i++){
        string pname;
        float pprice;

        cout<<"Enter name of product : "<<i+1<<" : ";
        cin>>pname;

        cout<<"Enter price of product : "<<i+1<<" : ";
        cin>>pprice;

        product.push_back(Product(pname,pprice));
    }

    cout<<"\nproduct list: "<<endl;
    for(int i = 0; i < product.size(); i++){
        cout << "Product " << i + 1 << ": " << product[i].name << ", Price: " << product[i].price << endl;
    }

    return 0;

}