	component nios_system is
		port (
			clk_clk        : in  std_logic                     := 'X';             -- clk
			cout_export    : out std_logic_vector(7 downto 0);                     -- export
			modes_export   : in  std_logic_vector(1 downto 0)  := (others => 'X'); -- export
			pattern_export : out std_logic_vector(17 downto 0);                    -- export
			reset_reset_n  : in  std_logic                     := 'X'              -- reset_n
		);
	end component nios_system;

	u0 : component nios_system
		port map (
			clk_clk        => CONNECTED_TO_clk_clk,        --     clk.clk
			cout_export    => CONNECTED_TO_cout_export,    --    cout.export
			modes_export   => CONNECTED_TO_modes_export,   --   modes.export
			pattern_export => CONNECTED_TO_pattern_export, -- pattern.export
			reset_reset_n  => CONNECTED_TO_reset_reset_n   --   reset.reset_n
		);

