SELECT title FROM movies JOIN ratings ON movies.id = ratings.movie_id ORDER BY rating DESC
WHERE id IN
(SELECT movie_id FROM ratings WHERE movie_id IN
 (SELECT movie_id FROM stars WHERE person_id IN
  (SELECT id FROM people WHERE name = 'Chadwick Boseman')));

