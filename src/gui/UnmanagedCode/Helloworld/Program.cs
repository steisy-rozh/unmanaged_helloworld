using System.Runtime.InteropServices;

namespace Helloworld;
class Program
{
    [DllImport("Utility/libhelloworld", EntryPoint = "hello_world")]
    private static extern void hello_world();

    static void Main(string[] args)
    {
        hello_world();
    }
}
