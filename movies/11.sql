SELECT name FROM movies WHERE id IN
(SELECT movie_id FROM ratings WHERE r)
SELECT id FROM people WHERE name = 'Chadwick Boseman'
