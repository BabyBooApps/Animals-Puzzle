using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class GameHidenSeek : MonoBehaviour
{
    public Sprite[] babySprites = new Sprite[15];
    int posCount;
    int babyCount=15;
    GameObject[] baby = new GameObject[15];
    GameObject babyHead;
    string BabyName;
    GameObject lastBaby;
    int i;
    float rightX;
    float leftX;
    float topY;
    //    float Diag;
    Vector3[] positions = new Vector3[11];
    List<int> pos = new List<int>() { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    static System.Random rand = new System.Random();

    bool right2Left = true;
    int hitBaby;
    // Use this for initialization
    void Start()
    {
        posCount = pos.Count;
        rightX = (Camera.main.orthographicSize * Camera.main.aspect);
        leftX = -rightX;
        topY = (Camera.main.orthographicSize);
        // Diag = Mathf.Sqrt(4*rightX * rightX + topY * topY);


        leftX = leftX - 1;
        rightX = rightX + 1;
        topY = topY + 1.6f;
        float Xfact = leftX/3;
        float Yfact =topY/3;
        positions = new Vector3[11] {new Vector3(leftX, topY-Yfact, 0), new Vector3(leftX, topY-2*Yfact, 0),  new Vector3(leftX, topY-3*Yfact, 0),new Vector3(leftX, topY-4*Yfact, 0),
                                     new Vector3(leftX-Xfact, topY, 0),new Vector3(leftX-2*Xfact, topY, 0),new Vector3(leftX-3*Xfact, topY, 0),new Vector3(leftX-4*Xfact, topY, 0),new Vector3(leftX-5*Xfact, topY, 0),
                                     new Vector3(rightX, topY-3*Yfact, 0) ,  new Vector3(rightX, topY-4*Yfact, 0)};

        /*positions = new Vector3[15] { new Vector3(leftX,-topY+4,0) , new Vector3(leftX,0, 0), new Vector3(leftX+5, topY, 0),  new Vector3(leftX,-topY+5,0) , new Vector3(leftX,2, 0), new Vector3(leftX+2, topY, 0),
                                  new Vector3(0, topY, 0),
                                  new Vector3(rightX-4f, topY, 0),new Vector3(rightX,0,0) , new Vector3(rightX,-topY+4, 0), new Vector3(3, topY, 0), new Vector3(rightX-5, topY, 0),new Vector3(rightX,2,0) , new Vector3(rightX,-topY+5, 0),new Vector3(rightX,-topY+3, 0)};
                                  */
        StartCoroutine(GenerateBabies());
    }



    IEnumerator GenerateBabies()
    {
        //yield return new WaitForSeconds(1f);
        i = 0;
        while (i < posCount)
        {
            int j = GetRandomInt(); 
            baby[j] = Instantiate(Resources.Load<GameObject>("BabyHideNSeek"), positions[i], Quaternion.identity) as GameObject;
            baby[j].gameObject.name = i.ToString();
           // int inx = rand.Next(0, babyCount);
            int inx = rand.Next(0, babySprites.Length);
            babyHead = baby[j].transform.Find("main").gameObject;
            //babyHead.GetComponent<SpriteRenderer>().sprite = Resources.Load<Sprite>("babies/baby" + inx.ToString());
            babyHead.GetComponent<SpriteRenderer>().sprite = babySprites[inx];
            i++;
            yield return new WaitForSeconds(0.1f);
        }
        //babyCount = i;
        StartCoroutine(AnimateBabies());

    }


    IEnumerator AnimateBabies()
    {
        while (true)
        {
            //yield return new WaitForSeconds(5f);
            for (int i = 0; i < posCount; i++)
            {
                float x = baby[i].transform.position.x;
                float y = baby[i].transform.position.y;
                if (y < topY && x < 0)
                {
                    iTween.MoveTo(baby[i], new Vector3(x + 0.7f, y, 0f), 1f);
                    iTween.RotateTo(baby[i], new Vector3(0f, 0f, -45f), 1f);
                    yield return new WaitForSeconds(1f);
                    iTween.MoveTo(baby[i], new Vector3(x, y, 0f), 1f);
                    iTween.RotateTo(baby[i], new Vector3(0f, 0f, 0f), 1f);
                }
                else if (y >= topY)
                {
                    iTween.RotateTo(baby[i], new Vector3(0f, 0f, -180f), 0.01f);
                    iTween.MoveTo(baby[i], new Vector3(x, y - 1.3f, 0f), 1f);

                    yield return new WaitForSeconds(1f);
                    iTween.MoveTo(baby[i], new Vector3(x, y, 0f), 1f);
                    yield return new WaitForSeconds(1f);
                    iTween.RotateTo(baby[i], new Vector3(0f, 0f, 0f), 0.01f);

                }
                if (y < topY && x >= rightX)
                {
                    iTween.MoveTo(baby[i], new Vector3(x - 0.7f, y, 0f), 1f);
                    iTween.RotateTo(baby[i], new Vector3(0f, 0f, 45f), 1f);
                    yield return new WaitForSeconds(1f);
                    iTween.MoveTo(baby[i], new Vector3(x, y, 0f), 1f);
                    iTween.RotateTo(baby[i], new Vector3(0f, 0f, 0f), 1f);
                }

                yield return new WaitForSeconds(1f);

            }
        }
    }

    int GetRandomInt()
    {
        int randint = rand.Next(0, pos.Count-1);
        int retvalue = pos[randint];
        pos.RemoveAt(randint);
        return retvalue;

    }





}