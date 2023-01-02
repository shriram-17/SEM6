package com.example.myapplication

import android.annotation.SuppressLint
import android.media.Rating
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.text.Editable
import android.widget.*
import com.example.myapplication.R.*


class MainActivity : AppCompatActivity() {
    @SuppressLint("MissingInflatedId")
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(layout.activity_main)

        var rating=findViewById<RatingBar>(R.id.rating)
        var txt2=findViewById<TextView>(R.id.tvt1)
        var btn =findViewById<Button>(R.id.button)
        var display =findViewById<EditText>(R.id.display)

       rating.onRatingBarChangeListener= RatingBar.OnRatingBarChangeListener{
                _, rating, _ ->
            if(rating.equals(1.0f)) {
                display.text = Editable.Factory.getInstance().newEditable("Disappointed. Very poor.")
            } else if (rating.equals(2.0f)) {
                display.text = Editable.Factory.getInstance().newEditable("Not good. Need improvement.")
            } else if (rating.equals(3.0f)) {
                display.text = Editable.Factory.getInstance().newEditable( "Satisfied.")
            } else if (rating.equals(4.0f)) {
                display.text = Editable.Factory.getInstance().newEditable("Good. Enjoyed it.")
            } else {
                display.text = Editable.Factory.getInstance().newEditable("Awesome. I love it.")
            }
        }

        btn.setOnClickListener(){
            Toast.makeText(this,display.text, Toast.LENGTH_SHORT).show()
        }



    }
}