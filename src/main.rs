extern crate time;

fn main() {
    println!("--- Start ---");
    
    let start = time::precise_time_ns();

    let d = "Hello! My name is hoge.";
    let s = "hoge";
    for i in 0..100 {
        let a = d.split(" ");
        for b in a {
            //println!("{}", b);
        }
    }

    let finish = time::precise_time_ns();

    println!("{} ns", (finish - start));
    println!("{} us", (finish - start)/1000);
    println!("{} ms", (finish - start)/1000000);

    println!("--- Finished ---");
}
