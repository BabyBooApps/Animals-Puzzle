using UnityEngine;
using System.Collections;
using System.Data;
using System.Collections.Generic;
using System.Linq;
using System;

public class DataFeed : MonoBehaviour
{
    public static DataTable data_table = new DataTable();

    public static string[] Attributes = new string[] { "OBJECT_NAME", "DISPLAYED", "OBJECT_SPRITE", "SHADOW_SPRITE", "ANIMAL_NAME_AUDIO", "ANIMAL_SOUND_AUDIO", "PUZZLE_OBJECT" };


    #region animals_dictionary
    static Dictionary<string, bool> animals_dict = new Dictionary<string, bool>()
    {
    {"bear", true},
    {"cow", true},
    {"crab", true},
    {"crow", false},
    {"dog", false},
    {"dolphin", false},
    {"duck", true},
    {"eagle", true},
    {"elephant", true},
    {"fish", true},
    {"flamingo", false},
    {"fox", true},
    {"giraffe", false},
    {"gorilla", true},
    {"hippopotamus", true},
    {"horse", true},
    {"koala", false},
    {"lion", true},
    {"macaw", false},
    {"monkey", true},
    {"octopus", true},
    {"ostrich", false},
    {"owl", true},
    {"pig", true},
    {"rabbit", true},
    {"rooster", true},
    {"seahorse", false},
    {"shark", true},
    {"tiger", true},
    {"toucan", false},
    {"turkey", true},
    {"turtle", true},
    {"vulture", false},
    {"walrus", false}   
    };
    #endregion

    public static void DataGen(Sprite[] animalSprites, Sprite[] animalShadows, AudioClip[] animalNameClips, AudioClip[] animalSoundClilps)
    {
        for (int col = 0; col < Attributes.Length; col++)
        {
            data_table.Columns.Add(Attributes[col].ToString());
        }

        data_table.Columns[1].DataType = typeof(bool);
        data_table.Columns[2].DataType = typeof(Sprite);
        data_table.Columns[3].DataType = typeof(Sprite);
        data_table.Columns[4].DataType = typeof(AudioClip);
        data_table.Columns[5].DataType = typeof(AudioClip);
        data_table.Columns[6].DataType = typeof(bool);


        int rocount = data_table.Rows.Count;
        for (int rows = 0; rows < animals_dict.Count; rows++)
        {
            data_table.Rows.Add(data_table.NewRow());
            data_table.Rows[rocount + rows][0] = animalSprites[rows].name.ToString().ToLower();
            //Debug.Log(list[rows]);
            data_table.Rows[rocount + rows][1] = false;
            data_table.Rows[rocount + rows][2] = animalSprites[rows];
            data_table.Rows[rocount + rows][3] = animalShadows[rows];
            data_table.Rows[rocount + rows][4] = animalNameClips[rows];
            data_table.Rows[rocount + rows][5] = animalSoundClilps[rows];
            data_table.Rows[rocount + rows][6] = animals_dict[animalSprites[rows].name.ToString()];

        }
    }



    public static void CheckForNullValues(int index)
    {
        bool InvalidData = false;
        foreach (DataRow item in data_table.Select("1=1"))
        {
            if (item[index] == DBNull.Value)
            {
                Debug.Log("Null value on Index:  " + index + ": " + item[0].ToString().ToUpper());
                InvalidData = true;
            }
        }
        if (!InvalidData)
            Debug.Log("No Invalid Data Found On Index: " + index);
    }
}
