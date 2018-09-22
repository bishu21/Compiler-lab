#include <iostream>
#include <vector>
#include <cstdio>
#include <cstring>
#include <string>

using namespace std;

struct node{
    node* children[11];
    string node_name;
    string node_val;
    int line_no;
    int node_no;
    bool is_int;
    bool is_bool;
    bool is_job;
    bool is_processor;
    bool is_memory;
    bool is_link;

    node() {
        is_int=false;
        is_bool=false;
        is_link=false;
        is_memory=false;
        is_processor=false;
        is_job=false;
    }
};