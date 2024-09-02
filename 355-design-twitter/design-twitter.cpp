class Twitter {
public:
    map<int,set<int>> friends;
    int curr=0;
    priority_queue <vector<int>> timeLine;
    Twitter() {
        friends.clear();
        curr=0;
        timeLine= priority_queue <vector<int>>();
    }
    
    void postTweet(int userId, int tweetId) {
        timeLine.push({curr++,tweetId,userId});
    }
    vector<int> getNewsFeed(int userId) {
        vector <int> ans;
        priority_queue <vector<int>> userTimeLine=timeLine;
        int n=0;
        while(!userTimeLine.empty() && n<10){
            auto topTweet=userTimeLine.top();
            userTimeLine.pop();
            if(topTweet[2]==userId||friends[userId].count(topTweet[2])){
                ans.push_back(topTweet[1]);
                n++;
            }
        }
        return ans;
    }
    
    void follow(int followerId, int followeeId) {
        friends[followerId].insert(followeeId);

    }
    
    void unfollow(int followerId, int followeeId) {
        friends[followerId].erase(followeeId);

    }
};

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */