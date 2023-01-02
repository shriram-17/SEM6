package com.example.myapplication

import android.annotation.SuppressLint
import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.*

class MainActivity : AppCompatActivity() {
    @SuppressLint("MissingInflatedId")
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        var fname=findViewById<EditText>(R.id.ed1);
        var lname=findViewById<EditText>(R.id.ed2);
        var radioGroup=findViewById<RadioGroup>(R.id.radioGroup);
        var spinner =findViewById<Spinner>(R.id.select);
        var btn=findViewById<Button>(R.id.Button);

        ArrayAdapter.createFromResource(
            this,
            R.array.Countries,
            android.R.layout.simple_spinner_item
        ).also { adapter ->
            adapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item)
            spinner.adapter = adapter
        }

        var radioText=" ";
        radioGroup.setOnCheckedChangeListener(
            RadioGroup.OnCheckedChangeListener{_,checkedId ->
                val radio:RadioButton=findViewById(checkedId)
                radioText=radio.text.toString();
            }
        )
      btn.setOnClickListener{
          if(fname.text.toString().matches(Regex("[a-zA-Z]*")) && lname.text.toString().matches(Regex("[a-zA-Z]*")))
          {
             val intent :Intent= Intent(this,MainActivity2::class.java);
             intent.putExtra("fname",fname.text.toString());
             intent.putExtra("lname",lname.text.toString());
              intent.putExtra("radioText",radioText);
              intent.putExtra("spinnerValue",spinner.selectedItem.toString());
              startActivity(intent);
          }
          else
          {
              Toast.makeText(applicationContext,"Name Fields should contains only alphabets.",Toast.LENGTH_SHORT).show();
          }
      }
    }

}