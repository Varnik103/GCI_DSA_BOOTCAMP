#include<bits/stdc++.h>
using namespace std;

template <typename V>
class mapNode{
    public:
        string key;
        V value;
        mapNode* next;
        
        mapNode(string key,V value){
            this->key=key;
            this->value=value;
            next=NULL;
        }

        ~mapNode(){
            delete next;
        }
};

template <typename V>
class ourMap{
    int count;
    int numBuckets;
    mapNode<V>** buckets;
    
    int getBucketIndex(string key){
        int hashcode=0;
        int coeff=1;
        for(int i=key.length()-1;i>=0;--i){
            hashcode+=coeff*key[i];
            hashcode=hashcode%numBuckets;
            coeff*=37;
            coeff=coeff*numBuckets;
        }
        return hashcode%numBuckets;
    }

    public:

        ourMap(){
            count=0;
            numBuckets=5;
            buckets=new mapNode<V>* [numBuckets];
            for(int i=0;i<numBuckets;++i)
                buckets[i]=NULL;
        }

        ~ourMap(){
            for(int i=0;i<numBuckets;++i)
                delete buckets[i];
            delete [] buckets;
        }

        int size(){
            return count;
        }

        void rehash(){
            mapNode<V>** temp=buckets;
            buckets=new mapNode<V>* [2*numBuckets];
            for(int i=0;i<2*numBuckets;++i)
                buckets[i]=NULL;
            int oldBucketSize=numBuckets;
            numBuckets*=2;
            count=0;
            for(int i=0;i<oldBucketSize;++i){
                mapNode<V>* head=temp[i];
                while(head!=NULL){
                    string key=head->key;
                    V value=head->value;
                    insert(key,value);
                    head=head->next;
                }
            }
            for(int i=0;i<oldBucketSize;++i){
                mapNode<V>* head=buckets[i];
                delete head;
            }
            delete [] temp;
        }

        void insert(string key,V value){
            int bucketIndex=getBucketIndex(key);
            mapNode<V>* head=buckets[bucketIndex];
            while(head!=NULL){
                if(key==head->key){
                    head->key=value;
                    return;
                }
                head=head->next;
            }
            mapNode<V>* node=new mapNode<V>(key,value);
            head=buckets[bucketIndex];
            node->next=head;
            buckets[bucketIndex]=node;
            count++;
            double loadFactor=(1.0*count)/numBuckets;
            if(loadFactor > 0.7)
                rehash();
        }

        V remove(string key){
            int bucketIndex=getBucketIndex(key);
            mapNode<V>* head=buckets[bucketIndex];
            mapNode<V>* prev=NULL;
            while(head!=NULL){
                if(head->key==key){
                    if(prev!=NULL){
                        prev->next=head->next;
                    }
                    else{
                        buckets[bucketIndex]=head->next;
                    }
                    V value=head->value;
                    head->next=NULL;
                    delete head;
                    return value;
                }
                prev=head;
                head=head->next;
            }
            return 0;
        }

        V getValue(string key){
            int bucketIndex=getBucketIndex(key);
            mapNode<V>* head=buckets[bucketIndex];
            while(head!=NULL){
                if(head->key==key){
                    count--;
                    return head->value;
                }
                head=head->next;
            }            
            return 0;
        }
};

int main(){
    ourMap<int> map;
    for(int i=0;i<10;++i){
        char c='0'+i;
        string key="abc";
        key=key+c;
        int value=i+1;
        map.insert(key,value);
    }
    cout<<map.size()<<endl;
    map.remove("abc2");
    map.remove("abc7");
    cout<<map.size()<<endl;
    for(int i=0;i<10;++i){
        char c='0'+i;
        string key="abc";
        key=key+c;
        cout<<key<<":"<<map.getValue(key)<<endl;
    }
    cout<<map.size()<<endl;
}