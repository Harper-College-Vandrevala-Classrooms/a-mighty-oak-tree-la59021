#pragma once

#include "Squirrel.hpp"
using namespace std;

class Branch {
    public:
        Branch(Squirrel* squire) {
            this->squirrel = squire;
        }

        Branch(Squirrel* squire, Branch* left) {
            this->squirrel = squire;
            this->left = left;
        }

        Branch(Squirrel* squire, Branch* left, Branch* right) {
            this->squirrel = squire;
            this->left = left;
            left->parent = this;
            this->right = right;
            right->parent = this;
        }

        void set_left(Branch* left) {
            this->left = left;
            left->parent = this;
        }

        void set_right(Branch* right) {
            this->right = right;
            right->parent = this;
        }

        void set_parent(Branch* parent) {
            this->parent = parent;
        }

        Branch* get_left() {
            return this->left;
        }

        Branch* get_right() {
            return this->right;
        }

        Branch* get_parent() {
            return this->right;
        }

    private:
        Squirrel* squirrel;
        Branch* left;
        Branch* right;
        Branch* parent;
};