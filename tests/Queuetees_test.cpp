#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/QueueTees.hpp"

class Puppy : public Cutie { public: Puppy() : Cutie("Fluffy puppy",10){} string get_description() override { return description; } int get_cuteness_rating() override { return cuteness_rating; } };
class Kitty : public Cutie { public: Kitty() : Cutie("Adorable kitty",9){} string get_description() override { return description; } int get_cuteness_rating() override { return cuteness_rating; } };
class PygmyMarmoset : public Cutie { public: PygmyMarmoset() : Cutie("Tiny pygmy marmoset",12){} string get_description() override { return description; } int get_cuteness_rating() override { return cuteness_rating; } };

TEST_CASE("QueueTees basic") {
    QueueTees q; Puppy p; Kitty k; PygmyMarmoset m;

    REQUIRE(q.size() == 0);

    q.enqueue(p); q.enqueue(k); q.enqueue(m);
    REQUIRE(q.size() == 3);

    REQUIRE(q.dequeue()->get_description() == "Fluffy puppy");
    REQUIRE(q.dequeue()->get_description() == "Adorable kitty");
    REQUIRE(q.dequeue()->get_description() == "Tiny pygmy marmoset");
    REQUIRE(q.size() == 0);
}
