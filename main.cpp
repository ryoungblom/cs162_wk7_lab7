//
//  main.cpp
//  Lab 7
//
//  Created by reuben on 2/26/17.
//  Copyright (c) 2017 reuben. All rights reserved.
//

#include <iostream>
#include <cstdlib>
using namespace std;

/*
class Queue
{
private:
        class queueNode
    {
        friend class Queue;
        int value;
        queueNode * next;
        queueNode (int number, queueNode * next1 = NULL)
        {
            value = number;
            next = next1;
        }
    };
    
    queueNode * front;
    queueNode * back;
    
    
public:
    Queue ();
    void addBack (int);
    void getFront (int &);
    void removeFront();
    
};

Queue::Queue ()
{
    front = NULL;
    back = NULL;
}

void Queue::addBack (int x)
{
    front = new queueNode (x);
    back = front;
}

void Queue::getFront(int & y)
{
    queueNode *temp;
    
    y = front -> value;
    temp = front;
    front = front ->next;
    delete temp;

}





int main() {
  
    
    Queue testQueue;
    
    cout << "put in queue...." << endl;
    
    testQueue.addBack(99);
    testQueue.addBack(3);
    testQueue.addBack(45);
    testQueue.addBack(144);
    
    int value;
    
    testQueue.getFront(value);
    
    cout << value << " numbers!" << endl;
    
    
   */


class Queue
{
protected:
    
public:
    struct queueNode;
    void queueStart ();
    void addBack (int x);
};



struct Queue::queueNode
{

    int data;
    queueNode * next;
    queueNode * prev;
};

void Queue::queueStart()
{
    queueNode * front;
    queueNode * back;
    queueNode * n;
    
    n = new Queue::queueNode;
    
    n-> data = 1;
    n -> prev = NULL;
    
    front = n;
    back = n;

}


void Queue::addBack (int x)
{
    
    n= new queueNode;
    n->data = x;
    
    n-> prev = back;
    back -> next = n;
    back = n;
    
    
    //front = new queueNode (x);
    //back = front;
    
    
    
}



int main ()
{
    /*
    struct queueNode
    {
        int data;
        queueNode * next;
        queueNode * prev;
    };
 
    
    Queue::queueNode * front;
    Queue::queueNode * back;
    Queue::queueNode * n;
    
    
    n = new Queue::queueNode;
    
    n-> data = 1;
    n -> prev = NULL;
    
    front = n;
    back = n;
    
      */
     
     
    n= new Queue::queueNode;
    n->data = 2;
    
    n-> prev = back;
    back -> next = n;
    back = n;
    
    
    n= new queueNode;
    n->data = 3;
    
    n-> prev = back;
    back -> next = n;
    back = n;
    
    
    
    n= new queueNode;
    n->data = 4;
    
    n-> prev = back;
    back -> next = n;
    back = n;
    
    
    back -> next = NULL;

    
    
    
    
    queueNode * ptr = front;  //then setting a new node pointer to the head
    
    while (ptr != NULL)  //and saying, "until it hits NULL...."
    {
        cout << ptr->data << " ";  //"print out data in succession"
        ptr = ptr -> next;  //"and then advance pointer to go to next node"
    }

    
    
    return 0;
}

