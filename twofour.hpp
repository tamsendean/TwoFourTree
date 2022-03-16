#include <iostream>

template <typename T> class TwoFourTree
{
    public:
    virtual const int size()=0;
};
    template <typename T>
    class TwoNode : public TwoFourTree<T> {
    public:
        TwoNode(const T& x) {
        T data;
        TwoFourTree<T>* left;
        TwoFourTree<T>* right;
        };
        
        TwoNode(const T& x, TwoFourTree<T>* left, TwoFourTree<T>* right){
            this->data = x;
            this->left, this->right = nullptr;
        }
        TwoNode(const T& x, TwoFourTree<T>* left, TwoFourTree<T>* right){
            this->left = left; //assign values for pointers 
            this->right = right;
        }
        virtual const int size(){
            int twoSize = 1;
            if (this->left != NULL){
                twoSize += size(left->size()); //if the node is not empty, take size
            }
            if (this->right != NULL){
                twoSize += size(right->size());
            }
        }
    };
    template <typename T>
    class ThreeNode : public TwoFourTree<T> {
    public:
        ThreeNode(const T& x, const T& y) {
        T data;
        TwoFourTree<T>* left;
        TwoFourTree<T>* right;
        TwoFourTree<T>* mid;
        int firstInt;
        int secondInt;
        };
        ThreeNode(const T& x, const T& y){
            left, right, mid = nullptr;
            firstInt = x;
            secondInt = y;
        }
        ThreeNode(const T& x, const T& y, TwoFourTree<T>* left, TwoFourTree<T>* mid, TwoFourTree<T>* right){
            this->left = left; //assign values
            this->right = right;
            this->mid = mid;
        }
        virtual const int size(){
            int threeSize = 2;
            if (this->left != NULL){
                threeSize += left->size(); //if the node is not empty, take size
            }
            if (this->right != NULL){
                threeSize += right->size();
            }
            if (this->mid != NULL){
                threeSize += mid->size();
            }
        }
    };

template <typename T> class FourNode : public TwoFourTree<T> {
private:
        T data;
        TwoFourTree<T>* left;
        TwoFourTree<T>* right;
        TwoFourTree<T>* left2;
        TwoFourTree<T>* right2; //define four nodes
        int firstInt;
        int secondInt;
        int thirdInt; //data elements
public:

        FourNode(const T& x, const T& y, const T& z, TwoFourTree<T>* left, TwoFourTree<T>* left2, TwoFourTree<T>* right, TwoFourTree<T>* right2){
            left, right, left2, right2 = nullptr;
            firstInt = x;
            secondInt = y;
            thirdInt = z;
        }
        FourNode(const T& x, const T& y, const T& z, TwoFourTree<T>* left, TwoFourTree<T>* left2, TwoFourTree<T>* right, TwoFourTree<T>* right2){
            this->left = left; //assign values for pointers 
            this->right = right;
            this->left2 = left2;
            this->right2 = right2;
            firstInt = x; //assign values
            secondInt = y;
            thirdInt = z;
        }
        virtual const int size(){
            int fourSize = 3;
            if (this->left != NULL){
                fourSize += size(left->size()); //if the node is not empty, take size
            }
            if (this->right != NULL){
                fourSize += size(right->size());
            }
            if (this->left2 != NULL){
                fourSize += size(left2->size());
            }
            if (this->right2 != NULL){
                fourSize += size(right2->size());
            }
            
        }
    };
