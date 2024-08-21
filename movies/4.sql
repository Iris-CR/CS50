SELECT title FROM movies WHERE id =
(SELECT movie_id FROM rating WHERE rating = 10.0);
