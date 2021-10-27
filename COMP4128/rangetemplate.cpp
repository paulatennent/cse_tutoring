

struct Node {
    bool needsProp;
    // stoirng other values...
}

Node tree[N];

void propogate(int i, long long l, long long r) {
    if (tree[i].needsProp) {
        
        
        // recalulate using lazy propgation value/input value
        // e.g in multiples of three, if it need prop you just shift it across
        


        // propogate to the left and right

        // set both left and right needs prop to be true
        tree[i * 2].needsProp = true;
        tree[i * 2 + 1].needsProp = true;

        // the current node is not updated so doesn't need to be propogated
        tree[i].needProp = false;
    }


}


void recalculate(int i, long long l, long long r) {
    
    // if its not a left node, then 
    if (r - l != 1) {
        // look at the left and the right
        Node left = tree[i * 2];
        Node right = tree[i * 2 + 1];

        tree[i] = ; // something
    // if it is a leaf node then...?
    } else {


    }
}



void update(int uL, int uR, int v, int i = 1, int cLeft = 0, int cRight = MAX_N) {
    if (uL == cLeft && uR == cRight) {
        // if we have found the node, then update it LAZILY! not actually update it (propogate will do this)
        // so update it similar to how you update the child nodes in the propogate function
        tree[i] = //something if you need it, (eg. tree[i].propval = ...)
        tree[i].needsProp = true;
        return;
    }

    // propogate again
    propagate(i, cLeft, cRight);

    // recurse to the left and then to the right
    int mid = (cLeft + cRight) / 2;
    if (uL < mid) update(uL, min(uR, mid), v, i * 2, cLeft, mid);
    if (uR > mid) update(max(uL, mid), uR, v, i * 2 + 1, mid, cRight);

    // now that the left and the right are correct, lets recalculate the value
    recalculate(i, cLeft, cRight);
}

long long query(int qL, int qR, int i = 1, int cLeft = 0, int cRight = MAX_N) {
    if (qL == cLeft && qR == cRight) {
        // return tree[i].something
        // you want to return what you need, it should be inside the node at tree[i]! 
    }
    // we propogate before we query the left and the right recursively so everything is up to date
    propagate(i, cLeft, cRight); 

    // now we want ot recursively look left and right
    int mid = (cLeft + cRight) / 2;
    long long ansl = 0;
    long long ansr = 0;
    // sometimes we want to go to both left and right, sometimes we dont
    if (qL < mid) ansl += query(qL, min(qR, mid), i * 2, cLeft, mid);
    if (qR > mid) ansr += query(max(qL, mid), qR, i * 2 + 1, mid, cRight);
    return //something// how are left and right related? do you need to add, take the max, etc...
}

// query: we want the queries to be O(1) (usually), so whatever we store in the node should be what we query
// update i

