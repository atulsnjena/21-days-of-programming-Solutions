use std::io;
fn main(){
    let mut input=String::new();
    io::stdin()
        .read_line(&mut input);
        let arr : Vec<char> = input.to_string().chars().collect();
        let mut esum:u32=0;
        let mut osum:u32=0;
        let mut diff:u32=0;
        let mut ctr:i32=0;
    for i in arr{
        let mut j:u32=i.into();
        j=j-48;
        if ctr%2==0{
            esum+=j;
        }else{
            osum+=j;
        }
        ctr=ctr+1;
    }
    diff=esum-osum;
    if diff == 0{
            println!("YES");
            }else{
            println!("NO");
            }
}
