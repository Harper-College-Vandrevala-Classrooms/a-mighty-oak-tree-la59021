#include "Squirrel.hpp"
#include "Branch.hpp"
#include <iostream>
#include <cassert>
using namespace std;

int main() {
    Squirrel cheeks = Squirrel("Cheeks");
    Branch node_one = Branch(&cheeks);

    Squirrel squeaks = Squirrel("Squeaks");
    Branch node_two = Branch(&squeaks);

    Squirrel fluffybutt = Squirrel("Mr. Fluffy Butt");
    Branch node_three = Branch(&fluffybutt);

    node_one.set_left(&node_two);
    node_one.set_right(&node_three);

    Branch* retrieved_node_one = node_one.get_left(); // This should retrieve the left node
    assert(retrieved_node_one == &node_two);
    Branch* retrieved_node_two = node_one.get_right(); // This should retrieve the right node
    assert(retrieved_node_two == &node_three);

    cout << "The example passes." << endl;

    return 0;
}