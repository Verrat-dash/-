#include <iostream>
#include <sstream>


struct Node {
    int value = 0;
    Node* left = nullptr;
    Node* right = nullptr;
};

int generate_number() {
    static int value = 1;
    return value++;
}

void print(Node* top) {
    std::cout << "\\*********Result structure*********//" << std::endl;
    while (top->left != nullptr) {
        std::cout << "  " << top->value << std::endl;
        std::cout << top->left->value << "   " << top->right->value << std::endl;
        top = top->left->left;
    }
    std::cout << "  " << top->value << std::endl;
}

Node* create_level(Node* top) {
    Node* newTail = new Node();
    Node* leftNode = new Node();
    leftNode->value = generate_number();
    Node* rightNode = new Node();
    rightNode->value = generate_number();
    top->left = leftNode;
    top->right = rightNode;
    leftNode->right = rightNode;
    rightNode->left = leftNode;
    leftNode->left = newTail;
    rightNode->right = newTail;
    newTail->value = generate_number();
    return newTail;
}


int main() {
    Node* root = new Node();
    Node* tail = root;
    int level_number = 0;
    std::string user_input;
    std::cout << "Enter number of level: ";
    while (true) {
        std::getline(std::cin, user_input);
        try {
            level_number = std::stoi(user_input);
            break;
        }
        catch (...) {
            std::cout << "Invalid nuber... try again: ";
        }
    }

    for (int i = 0; i < level_number; i++) {
        tail = create_level(tail);
    }
    print(root);
}
