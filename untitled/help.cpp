#include <iostream>
#include <string>
#include <map>
using namespace std;

enum class Genre {
    Action, Comedy, Drama, Romance, SciFi
};

enum class Rating {
    OneStar = 1, TwoStars, ThreeStars, FourStars, FiveStars
};

int main() {
    string movie_title;
    int genre_input, rating_input;
    map<string, pair<Genre, int>> genre_map;
    map<string, double> rating_map;

    while (true) {
        getline(cin, movie_title);
        if (movie_title == "q") {
            break;
        }
        cin >> genre_input >> rating_input;
        cin.ignore();

        if (genre_map.count(movie_title)) {
            auto &p = genre_map[movie_title];
            p.second++;
        } else {
            genre_map[movie_title] = make_pair(static_cast<Genre>(genre_input), 1);
        }

        double current_avg_rating = rating_map[movie_title];
        int current_num_ratings = genre_map[movie_title].second;
        double new_rating = static_cast<double>(rating_input);
        double new_avg_rating = (current_avg_rating * (current_num_ratings - 1) + new_rating) / current_num_ratings;
        rating_map[movie_title] = new_avg_rating;
    }

    for (const auto &p: genre_map) {
        const string &movie_title = p.first;
        const auto &genre_and_num_ratings = p.second;
        Genre genre = genre_and_num_ratings.first;
        int num_ratings = genre_and_num_ratings.second;
        double avg_rating = rating_map[movie_title];

        string genre_str;

        switch (genre) {
            case Genre::Action:
                genre_str = "Action";
                break;
            case Genre::Comedy:
                genre_str = "Comedy";
                break;
            case Genre::Drama:
                genre_str = "Drama";
                break;
            case Genre::Romance:
                genre_str = "Romance";
                break;
            case Genre::SciFi:
                genre_str = "SciFi";
                break;
        }

        cout << movie_title << ": " << num_ratings << " ratings, average rating " << avg_rating << " stars, genre: " << static_cast<int>(genre) << endl;
    }
}