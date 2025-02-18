
// /**
//  * Demo app for Ex4
//  */

// arielag1998@gmail.com
// 206862666
#include <iostream>
#include <string>
#include "tree.hpp"

using namespace std;

int main()
{
    Node<double> root_node = Node<double>(1.1);
    Tree<double> tree; // Binary tree that contains doubles.
    tree.add_root(&root_node);
    // Node<double> n1 = Node<double>(1.2);
    // Node<double> n2 = Node<double>(1.3);
    // Node<double> n3 = Node<double>(1.4);
    // Node<double> n4 = Node<double>(1.5);
    // Node<double> n5 = Node<double>(1.6);

    // tree.add_sub_node(root_node, n1);
    // tree.add_sub_node(root_node, n2);
    // tree.add_sub_node(n1, n3);
    // tree.add_sub_node(n1, n4);
    // tree.add_sub_node(n2, n5);

    //     // The tree should look like:
    //     /**
    //      *       root = 1.1
    //      *     /       \
    //      *    1.2      1.3
    //      *   /  \      /
    //      *  1.4  1.5  1.6
    //      */

    cout << "pre order :" << endl;

    for (auto it = tree.begin_pre_order(); it != tree.end_pre_order(); ++it)
    {
        std::cout << *it << " ";
    }
    cout << endl;

    cout << "post order :" << endl;

    for (auto node = tree.begin_post_order(); node != tree.end_post_order(); ++node)
    {
        cout << *node << " ";
    } // prints: 1.4, 1.5, 1.2, 1.6, 1.3, 1.1

    cout << endl;

    cout << "in order :" << endl;

    for (auto node = tree.begin_in_order(); node != tree.end_in_order(); ++node)
    {
        cout << *node << " ";
    } // prints: 1.4, 1.2, 1.5, 1.1, 1.6, 1.3
    cout << endl;

    cout << "bfs scan :" << endl;
    for (auto node = tree.begin_bfs_scan(); node != tree.end_bfs_scan(); ++node)
    {
        cout << *node << " ";
    } // prints: 1.1, 1.2, 1.3, 1.4, 1.5, 1.6

    cout << endl;

    cout << "dfs scan :" << endl;
    for (auto node = tree.begin_dfs_scan(); node != tree.end_dfs_scan(); ++node)
    {
        cout << *node << " ";
    } // prints: 1.1, 1.2, 1.4, 1.5, 1.3, 1.6

    cout << endl;

    cout << "heap scan :" << endl;
    for (auto it = tree.begin_heap(); it != tree.end_heap(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // cout << tree;

    //-------------------------------------------------------------------------------------------------------------------

    Node<double> root_node1 = Node<double>(1.1);
    Tree<double, 3> three_ary_tree; // 3-ary tree.

    Node<double> n1 = Node<double>(1.2);
    Node<double> n2 = Node<double>(1.3);
    Node<double> n3 = Node<double>(1.4);
    Node<double> n4 = Node<double>(1.5);
    Node<double> n5 = Node<double>(1.6);

    three_ary_tree.add_root(&root_node1);
    three_ary_tree.add_sub_node(root_node1, n1);
    three_ary_tree.add_sub_node(root_node1, n2);
    three_ary_tree.add_sub_node(root_node1, n3);
    three_ary_tree.add_sub_node(n1, n4);
    three_ary_tree.add_sub_node(n2, n5);

    cout << "bfs scan :" << endl;
    for (auto node = three_ary_tree.begin_bfs_scan(); node != three_ary_tree.end_bfs_scan(); ++node)
    {
        cout << *node << " ";
    } // prints: 1.1, 1.2, 1.3, 1.4, 1.5, 1.6

    cout << endl;


    cout << three_ary_tree;

    // cout << three_ary_tree;
    //      // The tree should look like:
    //     /**
    //      *       root = 1.1
    //      *     /      |     \
    //      *    1.2    1.3    1.4
    //      *   /        |
    //      *  1.5      1.6
    //      */
}
