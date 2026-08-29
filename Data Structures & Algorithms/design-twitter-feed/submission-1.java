class Twitter {
    class Tweet {
        int tweetId;
        int time;

        Tweet(int tweetId, int time) {
            this.tweetId = tweetId;
            this.time = time;
        }
    }

    Map<Integer, Set<Integer>> following;
    Map<Integer, List<Tweet>> tweets;

    int time;

    public Twitter() {
        following = new HashMap<>();
        tweets = new HashMap<>();
        time = 0;
    }

    public void postTweet(int userId, int tweetId) {
        if (!tweets.containsKey(userId)) {
            tweets.put(userId, new ArrayList<>());
        }

        tweets.get(userId).add(
            new Tweet(tweetId, time++)
        );
    }

    public List<Integer> getNewsFeed(int userId) {

        List<Integer> answer = new ArrayList<>();
        PriorityQueue<Tweet> maxHeap =
            new PriorityQueue<>(
                (a, b) -> Integer.compare(b.time, a.time)
            );

        if (tweets.containsKey(userId)) {
            maxHeap.addAll(tweets.get(userId));
        }

        if (following.containsKey(userId)) {

            for (int followeeId : following.get(userId)) {

                if (tweets.containsKey(followeeId)) {
                    maxHeap.addAll(tweets.get(followeeId));
                }
            }
        }

        while (!maxHeap.isEmpty() && answer.size() < 10) {
            answer.add(maxHeap.poll().tweetId);
        }

        return answer;
    }

    public void follow(int followerId, int followeeId) {

        if (!following.containsKey(followerId)) {
            following.put(followerId, new HashSet<>());
        }

        following.get(followerId).add(followeeId);
    }

    public void unfollow(int followerId, int followeeId) {

        if (following.containsKey(followerId)) {
            following.get(followerId).remove(followeeId);
        }
    }
}