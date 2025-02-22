using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public static class StaticArrays 
{
    public static List<string> blocksList = new List<string>();

    public static string[] blocks = new string[] { "airplane", "ambulance", "apple", "avocado", "backhoe", "bear", "bicycle", "boat", "bread", "bulldozer",/* "burger",*/ "cake pop", "cake roll", "candy cane", "candy", "carrot", "cereal", "cheese", "cherry", "chocolate fondue", "chocolate", "coconut", "cookie", "corn", "cow", "crab", "cracker", "croissant", "crow", "cupcake", "dog", "donut", "duck", "dump truck", "dumpling", "eagle",
        "egg", "elephant", "fajitas", "fig", "fire truck", "fish", "forklift", "fox", "french fries", "fruit salad", "garbage truck", "gorilla", "grapes", "green apple", "helicopter", "hippopotamus", "honey", "horse", "hot dog", "ice cream", "jam", "jelly bean", "jelly", "jet fighter", "kebab", "kiwifruit", "koala", "lemon", "lion",
        "lollipop", "macaw", "mangosteen", "monkey", "muffin", "octopus", "omelette", "orange", "owl", "pancake", "papaya", "pastry", "peach", "pear", "pig", "pizza", "police car", "pomegranate", "potato", "pumpkin", "rabbit", "radish", "road roller", "rooster", "sailboat", "school bus", "scooter", "shark", "soup", "spaghetti", "steak",
        "strawberry", "sushi", "suv", "swat truck", "tiger", "toast", "tomato", "toucan", "tow truck", "tractor", "train", "tram", "turkey", "turtle", "van", "vulture", "waffles", "walrus", "watermelon", "yogurt" };
    public static string[] shadows = new string[] { "airplane_s", "ambulance_s", "apple_s", "avocado_s", "backhoe_s", "bear_s", "bicycle_s", "boat_s", "bread_s", "bulldozer_s", /*"burger_s", */ "cake pop_s", "cake roll_s", "candy cane_s", "candy_s", "carrot_s", "cereal_s", "cheese_s", "cherry_s", "chocolate fondue_s", "chocolate_s", "coconut_s",
        "cookie_s", "corn_s", "cow_s", "crab_s", "cracker_s", "croissant_s", "crow_s", "cupcake_s", "dog_s", "donut_s", "duck_s", "dump truck_s", "dumpling_s", "eagle_s", "egg_s", "elephant_s", "fajitas_s", "fig_s", "fire truck_s", "fish_s", "forklift_s", "fox_s", "french fries_s", "fruit salad_s", "garbage truck_s", "gorilla_s", "grapes_s",
        "green apple_s", "helicopter_s", "hippopotamus_s", "honey_s", "horse_s", "hot dog_s", "ice cream_s", "jam_s", "jelly bean_s", "jelly_s", "jet fighter_s", "kebab_s", "kiwifruit_s", "koala_s", "lemon_s", "lion_s", "lollipop_s", "macaw_s", "mangosteen_s", "monkey_s", "muffin_s", "octopus_s", "omelette_s", "orange_s", "owl_s", "pancake_s",
        "papaya_s", "pastry_s", "peach_s", "pear_s", "pig_s", "pizza_s", "police car_s", "pomegranate_s", "potato_s", "pumpkin_s", "rabbit_s", "radish_s", "road roller_s", "rooster_s",
        "sailboat_s", "school bus_s", "scooter_s", "shark_s", "soup_s", "spaghetti_s", "steak_s", "strawberry_s", "sushi_s", "suv_s", "swat truck_s", "tiger_s", "toast_s", "tomato_s", "toucan_s", "tow truck_s", "tractor_s", "train_s", "tram_s", "turkey_s", "turtle_s", "van_s", "vulture_s", "waffles_s", "walrus_s", "watermelon_s", "yogurt_s" };
    
   // public static System.Random random = null;   
	
    public static Vector3[] initialPositions = new Vector3[3] { new Vector3(-6.8f, -3.5f, 0f), new Vector3(-1.1f, -3.6f, 0f), new Vector3(5f, -3.5f, 0f) };
    public static Vector3[] targetPositions = new Vector3[3] { new Vector3(-6.8f, 1.6f, -0.5f), new Vector3(-1.1f, 1.6f, -0.5f), new Vector3(5f, 1.6f, -0.5f) };


	public static Vector3[] bottomPositions  = new Vector3[3] { new Vector3(-6.8f, -3.5f, 0f), new Vector3(-1.1f, -3.5f, 0f), new Vector3(5f, -3.5f, 0f) };
	public static Vector3[] topPositions = new Vector3[3] { new Vector3(-6.8f, 1.6f, -0.5f), new Vector3(-1.1f, 1.6f, -0.5f), new Vector3(5f, 1.6f, -0.5f) };



	public static float leftX = 0f;
	public static float aspect = 0f;
}
